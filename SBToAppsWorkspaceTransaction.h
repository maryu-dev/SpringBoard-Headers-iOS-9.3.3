
#import "SBMainWorkspaceTransaction.h"

#import "FBApplicationUpdateScenesTransactionObserver.h"
#import "FBSynchronizedTransactionDelegate.h"
#import "SBSceneLayoutWorkspaceTransactionDelegate.h"
#import "SBUIAnimationControllerObserver.h"

@class FBUIApplicationSceneDeactivationAssertion, NSArray, NSSet, NSString, SBAppRepairTransaction, SBSceneLayoutWorkspaceTransaction, SBUIAnimationController;

@interface SBToAppsWorkspaceTransaction : SBMainWorkspaceTransaction <FBApplicationUpdateScenesTransactionObserver, SBSceneLayoutWorkspaceTransactionDelegate, FBSynchronizedTransactionDelegate, SBUIAnimationControllerObserver>
{
    id _transitionCompletion;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    id _layoutTransitionContinuation;
    SBAppRepairTransaction *_appRepairTransaction;
    SBUIAnimationController *_animationController;
    NSArray *_fromApplications;
    _Bool _underLockScreenInForeground;
    _Bool _gestureInitiated;
    unsigned long long _preactivationForegroundRunningApplicationCount;
    _Bool _toAndFromApplicationsDiffer;
    _Bool _notifiedSlaves;
    _Bool _retriedAfterVoluntaryExit;
    SBSceneLayoutWorkspaceTransaction *_layoutTransaction;
    NSSet *_trackedProcesses;
}

- (void)_fireAndClearResultBlockIfNecessaryForFailure:(_Bool)arg1;
- (id)animationController;
- (void)animationControllerDidRevealApplication:(id)arg1;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;
- (void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2;
- (_Bool)shouldWatchdog:(id *)arg1;
- (double)watchdogTimeout;
- (_Bool)transactionShouldConsiderLockStateForForegroundScenesDuringTransition:(id)arg1;
- (void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(id)arg2;
- (void)transaction:(id)arg1 performTransitionWithCompletion:(id)arg2;
- (void)transactionWillBeginLayoutTransition:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_didInterruptWithReason:(id)arg1;
- (_Bool)_shouldFailForChildTransaction:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (void)_willFailWithReason:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (_Bool)_canBeInterrupted;
- (void)_willBegin;
- (void)addSlaveTransaction:(id)arg1;
- (void)_notifySlavesIfNecessary;
- (void)_checkForAnimationCompletion;
- (void)_kickOffAnimation;
- (void)_noteAnimationFinished;
- (void)_clearAnimation;
- (void)_beginAnimation;
- (_Bool)_shouldUpdateUnderLockStateForForegroundScenes;
- (void)_performPostAnimationTasksWithCompletion:(id)arg1;
- (void)_performPreAnimationTasksWithCompletion:(id)arg1;
- (_Bool)_hasPostAnimationTasks;
- (_Bool)_hasPreAnimationTasks;
- (void)_animationDidRevealApplication;
- (void)_animationDidFinish;
- (void)_animationWillBegin:(_Bool)arg1;
- (id)_setupAnimation;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_synchronizeWithSceneUpdates;
- (void)_endTransition;
- (void)_beginTransition;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (void)_relinquishResignActiveAssertion;
- (void)_acquireResignActiveAssertion;
- (void)_handleApplicationDidNotChange:(id)arg1;
- (id)_transitionContext;
- (id)_scenesToBackground;
- (id)_applicationForScene:(id)arg1;
- (void)activateApplications;
- (void)enumerateDeactivatingApplicationsWithBlock:(id)arg1;
- (void)enumerateToApplicationsWithBlock:(id)arg1;
- (_Bool)toAndFromAppsDiffer;
- (_Bool)isGoingToLauncher;
- (void)performToAppStateCleanup;
- (_Bool)shouldAnimateOrientationChangeOnCompletion;
- (_Bool)isGoingToMainSwitcher;
- (_Bool)isFromSideSwitcher;
- (_Bool)isFromMainSwitcher;
- (_Bool)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (_Bool)shouldRestoreSpringBoardContentOnCleanup;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
@property(readonly, nonatomic) NSArray *deactivatingApplications;
@property(readonly, nonatomic) NSArray *activatingApplications;
@property(readonly, nonatomic) NSArray *fromApplications;
@property(readonly, nonatomic) NSArray *toApplications;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

