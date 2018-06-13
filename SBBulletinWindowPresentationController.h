
#import "UIPresentationController.h"

@class UIView;

@interface SBBulletinWindowPresentationController : UIPresentationController
{
    UIView *_counterRotatedView;
    double _counterRotatedAngle;
    struct CGRect _counterRotatedOriginalBounds;
}

- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)_removeCounterRotationIfNecessary;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (_Bool)_shouldDisableInteractionDuringTransitions;
- (_Bool)shouldRemovePresentersView;
- (_Bool)shouldPresentInFullscreen;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end

