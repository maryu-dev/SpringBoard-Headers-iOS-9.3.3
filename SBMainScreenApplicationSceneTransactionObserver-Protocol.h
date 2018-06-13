
#import "NSObject.h"

@class FBApplicationUpdateScenesTransaction, FBScene, NSArray;

@protocol SBMainScreenApplicationSceneTransactionObserver <NSObject>
- (void)mainScreenApplicationSceneDidCommit:(FBScene *)arg1;
- (void)mainScreenApplicationSceneWillCommit:(FBScene *)arg1;
- (void)mainScreenApplicationUpdateScenesTransactionCompleted:(FBApplicationUpdateScenesTransaction *)arg1;
- (void)mainScreenApplicationsDidCommitSceneUpdates:(NSArray *)arg1;
@end

