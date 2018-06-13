
#import "SBMainWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class NSString, SBUIAnimationController;

@interface SBSwitcherActivateNoninteractivelyTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBUIAnimationController *_animationController;
}

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_releaseOrientationLock;
- (void)_lockOrientation;
- (void)_beginAnimation;
- (void)_setupAnimation;
- (void)_willComplete;
- (void)_begin;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

