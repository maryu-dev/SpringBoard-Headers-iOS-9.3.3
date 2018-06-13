
#import "SBUIMainScreenAnimationController.h"

@class SBSceneLayoutAnimationWrapperView, UIView;

@interface SBUIBootToUserSetupAppZoomInAnimationController : SBUIMainScreenAnimationController
{
    SBSceneLayoutAnimationWrapperView *_layoutAnimationWrapperView;
    UIView *_snapshotView;
}

- (void)_finishedZooming;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)_animationProgressDependencies;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)_setHidden:(_Bool)arg1;
- (id)_getTransitionWindow;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

