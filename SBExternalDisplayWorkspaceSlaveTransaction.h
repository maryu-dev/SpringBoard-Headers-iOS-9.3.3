
#import "SBWorkspaceTransaction.h"

#import "FBSynchronizedTransaction.h"

@class NSString;

@interface SBExternalDisplayWorkspaceSlaveTransaction : SBWorkspaceTransaction <FBSynchronizedTransaction>
{
    id <FBSynchronizedTransactionDelegate> _synchronizationDelegate;
}

- (void)_doIt;
- (void)_doWork;
- (void)performSynchronizedCommit;
- (_Bool)isReadyForSynchronizedCommit;
- (void)_begin;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

