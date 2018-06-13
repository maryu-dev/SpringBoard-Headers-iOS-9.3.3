
#import "SBUIAnimationController.h"

@class SBWorkspaceTransitionRequest;

@interface SBUIWorkspaceAnimationController : SBUIAnimationController
{
    id _transitionAnimation;
}

- (void)_animateInteractiveApplicationTransitionFromPercentage:(double)arg1 toPercentage:(double)arg2 withSettings:(id)arg3;
- (void)_setInteractiveApplicationTransitionAnimationPercentage:(double)arg1;
- (void)_noteAnimationDidCommit:(_Bool)arg1 withSettings:(id)arg2;
@property(readonly, nonatomic) SBWorkspaceTransitionRequest *workspaceTransitionRequest;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;

@end

