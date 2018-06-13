
#import "SBUIWorkspaceAnimationController.h"

@class BSAnimationSettings;

@interface SBUIBlockAnimationController : SBUIWorkspaceAnimationController
{
    BSAnimationSettings *_animationSettings;
    id _animationBlock;
}

- (void)_didComplete;
- (void)_startAnimation;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(id)arg3;

@end

