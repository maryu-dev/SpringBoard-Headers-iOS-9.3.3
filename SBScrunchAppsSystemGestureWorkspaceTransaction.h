
#import "SBSystemGestureWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class FBUIApplicationSceneDeactivationAssertion, NSString, SBUIAnimationController;

@interface SBScrunchAppsSystemGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBUIAnimationController *_animationController;
    _Bool _ignoringEvents;
}

- (void)_unlockOrientation;
- (void)_lockOrientation:(long long)arg1;
- (void)_resumeEventsIfNecessary;
- (void)_ignoreEvents;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_suspendGestureCancelled;
- (void)_suspendGestureEndedWithCompletionType:(long long)arg1;
- (void)_suspendGestureChanged:(double)arg1;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)_beginAnimation;
- (void)_setupAnimation;
- (void)systemGestureStateChanged:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

