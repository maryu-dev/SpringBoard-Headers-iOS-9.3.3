
#import "NSObject.h"

@class FBApplicationLibrary, NSArray;

@protocol FBApplicationLibraryObserver <NSObject>

@optional
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 networkUsageDidChange:(_Bool)arg2;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 didDemoteApplications:(NSArray *)arg2;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 didRemoveApplications:(NSArray *)arg2;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 didReplaceApplications:(NSArray *)arg2 withApplications:(NSArray *)arg3;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 didAddApplications:(NSArray *)arg2;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 didCancelPlaceholders:(NSArray *)arg2;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 didAddPlaceholders:(NSArray *)arg2;
@end

