
#import "NSObject.h"

@class NSDictionary, NSIndexPath, NSString, SBApplication, SBIcon, SBIconModel, SBRootFolder, UIWebClip;

@protocol SBIconModelDelegate <NSObject>
- (NSIndexPath *)iconModel:(SBIconModel *)arg1 customInsertionIndexPathForIcon:(SBIcon *)arg2 inRootFolder:(SBRootFolder *)arg3;
- (NSDictionary *)placeholdersByDisplayIDForIconModel:(SBIconModel *)arg1;
- (SBApplication *)iconModel:(SBIconModel *)arg1 applicationWithBundleIdentifier:(NSString *)arg2;
- (_Bool)canAddDownloadingIconForApplication:(SBApplication *)arg1;
- (_Bool)canAddWebClip:(UIWebClip *)arg1;
- (_Bool)supportsDock;
- (unsigned long long)maxColCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (unsigned long long)maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (unsigned long long)maxIconCountForDock;
- (unsigned long long)maxIconCountForListInFolderClass:(Class)arg1;
- (unsigned long long)maxListCountForFolders;

@optional
- (void)didDeleteIconState:(SBIconModel *)arg1;
- (void)didSaveIconState:(SBIconModel *)arg1;
- (_Bool)canSaveIconState:(SBIconModel *)arg1;
@end

