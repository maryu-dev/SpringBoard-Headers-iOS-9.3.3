
#import "SBDosidoAnimator.h"

@class UIView;

@interface SBSlideOverDosidoAnimator : SBDosidoAnimator
{
    UIView *_fromContainerView;
    UIView *_toContainerView;
    UIView *_fromDimmingView;
    UIView *_toDimmingView;
}

+ (double)defaultDuration;
- (void)_rotateViewIfNecessary:(id)arg1 inverted:(_Bool)arg2;
- (void)_cleanupDosido;
- (void)_animateDosidoWithFactory:(id)arg1 completion:(id)arg2;
- (void)_prepareDosido;
- (unsigned long long)_actualAnimationDirection;
- (void)setToView:(id)arg1;
- (void)setFromView:(id)arg1;
- (id)initWithParentView:(id)arg1 fromOrientation:(long long)arg2;

@end

