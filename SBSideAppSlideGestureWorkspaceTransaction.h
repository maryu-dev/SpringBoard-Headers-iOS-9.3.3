
#import "SBSystemGestureWorkspaceTransaction.h"

#import "BSTransactionObserver.h"

@class NSString, SBMainWorkspaceTransaction;

@interface SBSideAppSlideGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <BSTransactionObserver>
{
    _Bool _waitingForGestureToComplete;
    SBMainWorkspaceTransaction *_activateSideAppTransaction;
    _Bool _activatedSideApp;
    _Bool _updateWhitePointAdaptationStrengthOnComplete;
}

- (void)_cleanupSideApp;
- (void)_activateSideApp;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)_begin;
- (void)notePassedSideAppActivationThreshold;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

