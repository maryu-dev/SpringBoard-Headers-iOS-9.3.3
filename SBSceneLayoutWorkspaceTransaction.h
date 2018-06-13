
#import "SBWorkspaceTransaction.h"

#import "FBApplicationUpdateScenesTransactionObserver.h"
#import "FBSynchronizedTransaction.h"
#import "FBSynchronizedTransactionGroupDelegate.h"

@class FBDisplayLayoutTransition, FBSynchronizedTransactionGroup, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, SBSceneBackgroundedStatusAssertion, SBWorkspaceApplicationTransitionContext;

@interface SBSceneLayoutWorkspaceTransaction : SBWorkspaceTransaction <FBSynchronizedTransactionGroupDelegate, FBApplicationUpdateScenesTransactionObserver, FBSynchronizedTransaction>
{
    id <SBSceneLayoutWorkspaceTransactionDelegate> _delegate;
    unsigned long long _options;
    FBDisplayLayoutTransition *_fbLayoutTransition;
    _Bool _isTransitioning;
    _Bool _transitionFailed;
    _Bool _delegateTransitionComplete;
    _Bool _synchronizeLayoutTransitionWithSceneUpdates;
    _Bool _performSceneUpdates;
    _Bool _waitForSceneUpdates;
    SBWorkspaceApplicationTransitionContext *_transitionContext;
    FBSynchronizedTransactionGroup *_sceneUpdateTransactionGroup;
    SBSceneBackgroundedStatusAssertion *_scenesBackgroundedStatusAssertion;
    NSMutableSet *_updateTransactions;
    NSMutableDictionary *_appsBySceneID;
    NSMutableDictionary *_activatingAppsBySceneID;
    NSMutableDictionary *_deactivatingAppsBySceneID;
    NSMutableSet *_scenesToBackground;
    id <FBSynchronizedTransactionDelegate> _synchronizationDelegate;
}

- (_Bool)synchronizedTransactionGroup:(id)arg1 shouldFailForSynchronizedTransaction:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)performSynchronizedCommit;
- (_Bool)isReadyForSynchronizedCommit;
- (void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;
- (void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2;
- (void)transaction:(id)arg1 willUpdateScene:(id)arg2;
- (void)transaction:(id)arg1 didCreateScene:(id)arg2;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)_sendActivationResultWithSuccess:(_Bool)arg1;
- (_Bool)_overrideInterfaceOrientationForOrientationMismatch:(long long *)arg1;
- (void)_updateScenesForTransitionCompletion;
- (void)_prepareScenesForTransition;
- (void)_updateAggregateDictionary;
- (void)_mainDisplayUpdateAggregateDictionaryForLayoutRoleWithApplication:(id)arg1;
- (void)_prepareSynchronizedSceneUpdates;
- (void)_synchronizeSceneUpdatesNow;
- (void)_performSynchronizedCommit;
- (void)_beginLayoutTransitionNow;
- (void)_completeTransition;
- (void)_evaluateTransitionCompletion;
- (void)_performTransition;
- (void)_captureAppsForTransition;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_willFailWithReason:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_begin;
- (void)_willBegin;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

