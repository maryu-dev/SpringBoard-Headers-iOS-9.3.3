
#import "SBUIBlockAnimationController.h"

@class SBSceneLayoutViewController;

@interface SBSceneLayoutTransitionAnimationController : SBUIBlockAnimationController
{
    SBSceneLayoutViewController *_layoutController;
}

- (id)containerView;
- (id)_getTransitionWindow;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(id)arg3;
- (id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 animationBlock:(id)arg4;

@end

