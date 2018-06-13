
#import "NSObject.h"

@class SBFolderView;

@protocol SBFolderViewDelegate <NSObject>
- (void)folderViewShouldBeginEditing:(SBFolderView *)arg1;
- (void)folderViewShouldClose:(SBFolderView *)arg1;
- (void)folderViewDidEndScrolling:(SBFolderView *)arg1;
- (void)folderViewWillBeginScrolling:(SBFolderView *)arg1;
- (void)folderView:(SBFolderView *)arg1 currentPageIndexDidChange:(long long)arg2;
- (Class)iconListViewClassForFolderView:(SBFolderView *)arg1;

@optional
- (void)folderViewDidReceiveCancelReachabilityAction:(SBFolderView *)arg1;
@end

