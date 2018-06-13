
#import "SBStarkWorkspaceTransaction.h"

#import "SBMainScreenApplicationSceneTransactionObserver.h"
#import "SBSceneLayoutWorkspaceTransactionDelegate.h"

@class NSString, SBSceneLayoutWorkspaceTransaction, SBWorkspaceEntity;

@interface SBStarkToAppWorkspaceTransaction : SBStarkWorkspaceTransaction <SBSceneLayoutWorkspaceTransactionDelegate, SBMainScreenApplicationSceneTransactionObserver>
{
    _Bool _fromAssistant;
    SBSceneLayoutWorkspaceTransaction *_layoutTransaction;
    _Bool _mainScenesDidCommit;
    id _transitionCompletion;
}

- (void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(id)arg2;
- (void)transaction:(id)arg1 performTransitionWithCompletion:(id)arg2;
- (void)transactionWillBeginLayoutTransition:(id)arg1;
- (void)mainScreenApplicationSceneDidCommit:(id)arg1;
- (void)mainScreenApplicationSceneWillCommit:(id)arg1;
- (void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1;
- (void)mainScreenApplicationsDidCommitSceneUpdates:(id)arg1;
- (void)_begin;
- (id)_displayForDisplayEntity:(id)arg1;
- (id)_effectiveTopEntity;
- (void)_performTransition;
- (void)_completeTransition;
- (void)_evaluateShouldPerformTransition;
@property(readonly, nonatomic) SBWorkspaceEntity *toEntity;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

