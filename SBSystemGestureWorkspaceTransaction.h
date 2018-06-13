
#import "SBMainWorkspaceTransaction.h"

#import "FBSynchronizedTransactionDelegate.h"

@class NSMutableSet, NSString, UIGestureRecognizer;

@interface SBSystemGestureWorkspaceTransaction : SBMainWorkspaceTransaction <FBSynchronizedTransactionDelegate>
{
    NSString *_suppressionReason;
    UIGestureRecognizer *_gestureRecognizer;
    long long _completionType;
    NSMutableSet *_nonSlaveChildrenWaitingToFinish;
    _Bool _notifiedSlaves;
}

- (void)_notifySlavesIfNecessary;
- (void)_notifySlavesForMilestoneRemovalIfNecessary;
- (void)_beginAnimation;
- (void)_setupAnimation;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)addSlaveTransaction:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_willAddChildTransaction:(id)arg1;
- (void)removeAllMilestones;
- (_Bool)removeMilestones:(id)arg1;
- (_Bool)removeMilestone:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (void)finishWithCompletionType:(long long)arg1;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

