
#import "FBTransaction.h"

@class FBSDisplay, NSMutableSet, SBAlertManager, SBSceneLayoutViewController, SBWorkspaceTransitionRequest;

@interface SBWorkspaceTransaction : FBTransaction
{
    NSMutableSet *_slaveTransactions;
    _Bool _clearsCompletionAsynchronously;
    FBSDisplay *_display;
    SBWorkspaceTransitionRequest *_transitionRequest;
    SBAlertManager *_alertManager;
    SBSceneLayoutViewController *_layoutController;
}

- (id)slaveTransactions;
- (void)addSlaveTransaction:(id)arg1;
- (void)_performDeviceCoherencyCheck;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)keepAliveForAsyncBlock:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1;
- (id)init;

@end

