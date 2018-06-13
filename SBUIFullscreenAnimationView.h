
#import "UIView.h"

@interface SBUIFullscreenAnimationView : UIView
{
    id <SBUIFullscreenAnimationViewDelegate> _delegate;
    _Bool _animating;
}

- (void)_notifyDelegateThatAnimationIsDone;
- (void)_notifyDelegateAnimationBeganWithDuration:(double)arg1 delay:(double)arg2;
- (void)_animationEnded;
- (void)_animationBegan;
- (void)endTransition;
- (void)beginTransition;
- (void)setToView:(id)arg1;
- (void)setFromView:(id)arg1;

@end

