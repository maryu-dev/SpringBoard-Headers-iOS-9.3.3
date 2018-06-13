
#import "SBSystemGestureWorkspaceTransaction.h"

#import "SBSwitchAppSwipeTransactionDelegate.h"

@class FBUIApplicationSceneDeactivationAssertion, NSString, SBSwitchAppList, SBSwitchAppSwipeTransaction, SBWorkspaceApplicationTransitionContext;

@interface SBSwitchAppSystemGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBSwitchAppSwipeTransactionDelegate>
{
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBWorkspaceApplicationTransitionContext *_currentTransitionContext;
    _Bool _newGesturePending;
    SBSwitchAppSwipeTransaction *_trackingSwipeTransaction;
    SBSwitchAppList *_switchAppList;
}

- (_Bool)shouldWatchdog:(id *)arg1;
- (double)watchdogTimeout;
- (void)swipeTransactionFinishedAnimating:(id)arg1;
- (void)_beginNextSwipeTransaction;
- (void)_interruptGestureIfAppropriate;
- (void)_unlockOrientation;
- (void)_lockOrientation:(long long)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

