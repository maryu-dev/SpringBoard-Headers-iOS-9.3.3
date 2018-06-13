
#import "SBMainWorkspaceTransaction.h"

#import "FBSynchronizedTransactionDelegate.h"

@class FBSynchronizedTransactionGroup, NSString;

@interface SBSuspendedWorkspaceTransaction : SBMainWorkspaceTransaction <FBSynchronizedTransactionDelegate>
{
    FBSynchronizedTransactionGroup *_synchronizedGroup;
    _Bool _notifiedSlaves;
}

- (void)_notifySlavesIfNecessary;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)addSlaveTransaction:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_begin;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

