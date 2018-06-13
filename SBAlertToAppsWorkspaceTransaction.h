
#import "SBToAppsWorkspaceTransaction.h"

#import "SBAlertManagerObserver.h"

@class NSString, SBAutoPiPWorkspaceTransaction, SBPasscodeLockDisableAssertion, SBWorkspaceAlert, SBWorkspaceAlertTransitionContext;

@interface SBAlertToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction <SBAlertManagerObserver>
{
    SBWorkspaceAlertTransitionContext *_alertTransitionContext;
    SBWorkspaceAlert *_alert;
    SBPasscodeLockDisableAssertion *_siriUnlockAssertion;
    NSString *_ignoreOcclusionsReasonForActivatingApps;
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
    _Bool _preventAlertDeactivationForAnimation;
    _Bool _preventAlertDeactivationForAnimationLegacy;
    _Bool _createdAnimation;
    _Bool _animateActivation;
    _Bool _goingToSpringBoard;
    _Bool _animatedAppActivation;
    _Bool _deactivateAfterNextLaunch;
    _Bool _activatingFromAssistant;
    _Bool _fadeAssistant;
    _Bool _updateStatusBarForLockTeardown;
    _Bool _waitingForAppActivation;
    int _pidToAutoPIP;
    _Bool _automaticallyPippingInCallAlert;
    _Bool _hidKeyboardForTransition;
}

- (void)_cleanUpAfterAnimation;
- (void)_deactivateAlertIfNecessary;
- (void)_alertAnimationComplete:(id)arg1;
- (_Bool)_isFromMainSwitcher;
- (id)_animationToApplications;
- (id)_animationToSpringBoard;
- (_Bool)_shouldAnimateTransition;
- (_Bool)_isAlertLockScreen;
- (void)_doLegacyAlertAnimationWatchingThatNobodyWantsToSupportAnymoreInThisTransactionTodayPleaseGetRidOfMeSometimePlease;
- (void)_activateApplications:(_Bool)arg1;
- (_Bool)_shouldUpdateUnderLockStateForForegroundScenes;
- (void)_animationDidFinish;
- (void)_animationDidRevealApplication;
- (void)_animationWillBegin:(_Bool)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (void)_performPreAnimationTasksWithCompletion:(id)arg1;
- (_Bool)_hasPreAnimationTasks;
- (void)_endTransition;
- (id)_setupAnimation;
- (void)_clearAnimation;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_beginTransition;
- (void)_synchronizeWithSceneUpdates;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
- (void)activateApplications;
- (void)_didComplete;
- (void)_begin;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

