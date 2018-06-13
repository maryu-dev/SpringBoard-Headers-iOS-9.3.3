
#import "SBToAppsWorkspaceTransaction.h"

#import "SBAlertChangeTransactionDelegate.h"

@class NSString, SBAlertChangeTransaction, SBDisableActiveInterfaceOrientationChangeAssertion, SBLockScreenViewControllerBase;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction <SBAlertChangeTransactionDelegate>
{
    SBLockScreenViewControllerBase *_lockScreenController;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
    SBAlertChangeTransaction *_toLockscreenAlertTransaction;
    id _alertActivationCompletion;
}

- (void)alert:(id)arg1 didActivateWithCompletion:(id)arg2;
- (_Bool)_shouldUpdateUnderLockStateForForegroundScenes;
- (void)_callAndClearAlertActivationCompletionIfNecessary;
- (void)_endTransition;
- (void)_didComplete;
- (void)_alertDidActivate;
- (void)_setupAndActivate;
- (void)_kickoffAlertActivation;
- (void)_begin;
- (_Bool)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1 lockScreenController:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

