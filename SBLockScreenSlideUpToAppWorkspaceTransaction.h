
#import "SBMainWorkspaceTransaction.h"

#import "BSTransactionObserver.h"
#import "FBSynchronizedTransactionDelegate.h"

@class NSString, SBWorkspaceTransaction;

@interface SBLockScreenSlideUpToAppWorkspaceTransaction : SBMainWorkspaceTransaction <BSTransactionObserver, FBSynchronizedTransactionDelegate>
{
    _Bool _launchedApp;
    SBWorkspaceTransaction *_earlyLaunchTransaction;
    SBWorkspaceTransaction *_deferredFinalLaunchTransaction;
    _Bool _gestureCompleted;
    _Bool _didBegin;
    _Bool _notifiedSlaves;
}

- (void)_notifySlavesIfNecessary;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)addSlaveTransaction:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)launchAppUnderLockScreenWithTransaction:(id)arg1;
- (void)noteGestureCompletedSuccessfully:(_Bool)arg1 cleanupTransaction:(id)arg2;
- (_Bool)isGestureCompleted;
- (void)_begin;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

