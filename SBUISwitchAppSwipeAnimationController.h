
#import "SBUIMainScreenAnimationController.h"

@class BSUIAnimationFactory, SBSceneLayoutAnimationWrapperView, SBWorkspaceApplicationTransitionContext;

@interface SBUISwitchAppSwipeAnimationController : SBUIMainScreenAnimationController
{
    BSUIAnimationFactory *_animationFactory;
    id <SBDosidoAnimator> _currentAnimator;
    unsigned long long _currentDirection;
    SBSceneLayoutAnimationWrapperView *_startingView;
    SBSceneLayoutAnimationWrapperView *_targetView;
    SBWorkspaceApplicationTransitionContext *_startingTransitionContext;
    SBWorkspaceApplicationTransitionContext *_targetTransitionContext;
    SBWorkspaceApplicationTransitionContext *_endingTransitionContext;
}

- (id)_animationFactory;
- (void)_animator:(id)arg1 finishedAnimating:(_Bool)arg2;
- (void)_startAnimatingInDirection:(unsigned long long)arg1;
- (id)_newStretchTransformerForDirection:(unsigned long long)arg1;
- (id)_newDosidoAnimatorForDirection:(unsigned long long)arg1;
- (id)_newAnimationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 displayMode:(long long)arg3;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
- (void)setStepPercentage:(double)arg1;
- (double)stepPercentage;
- (_Bool)isStepped;
- (void)enableSteppingWithAnimationSettings:(id)arg1;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)startAnimatingInDirection:(unsigned long long)arg1 withContext:(id)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

