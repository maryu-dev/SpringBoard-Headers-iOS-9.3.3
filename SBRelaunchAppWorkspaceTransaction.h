
#import "SBToAppsWorkspaceTransaction.h"

@class SBDisableActiveInterfaceOrientationChangeAssertion, SBStarkScreenController, SBWorkspaceApplication;

@interface SBRelaunchAppWorkspaceTransaction : SBToAppsWorkspaceTransaction
{
    _Bool _relaunchSuspended;
    _Bool _willBeOccluded;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
    SBStarkScreenController *_starkScreenController;
    SBWorkspaceApplication *_toApp;
}

- (void)_handleAppRelaunch:(id)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (void)_cleanUpAnimation;
- (id)_setupAnimation;
- (id)_animationForApp:(id)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@end

