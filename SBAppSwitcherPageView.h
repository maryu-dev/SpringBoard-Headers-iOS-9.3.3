
#import "UIView.h"

@class SBAppSwitcherSoftOutlineShadowView, SBDisplayItem, UIView<SBAppSwitcherPageContentView>;

@interface SBAppSwitcherPageView : UIView
{
    UIView *_hitTestBlocker;
    UIView<SBAppSwitcherPageContentView> *_view;
    UIView *_overlayView;
    SBDisplayItem *_displayItem;
    UIView *_contentDarkeningView;
    long long _shadowStyle;
    double _shadowAlpha;
    double _cornerRadius;
    SBAppSwitcherSoftOutlineShadowView *_shadowView;
    UIView *auxiliaryView;
    id <SBAppSwitcherPageViewDelegate> _delegate;
}

+ (double)shadowOutset;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct CGAffineTransform)_overlayTransform;
- (struct CGAffineTransform)_scaleTransform;
- (struct CGPoint)_centerForSubviewLayout;
- (struct CGRect)_viewFrame;
- (void)_updateCornerRadius;
- (void)_setupShadowImage;
- (void)_updateShadow;
- (void)transitionDidEnd:(_Bool)arg1 forPresentation:(_Bool)arg2;
- (void)interactionDidEnd:(_Bool)arg1;
- (void)updateTransitionProgress:(double)arg1;
- (void)viewDismissing:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)viewPresenting:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)invalidate;
@property(nonatomic) struct CGRect shadowClippingFrame;
@property(nonatomic) _Bool shouldClipShadow;
@property(nonatomic) double darkeningAlpha;
@property(nonatomic) double contentAlpha;
@property(nonatomic) double overlayAlpha;
- (void)setBlocksTouches:(_Bool)arg1;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)prepareToBecomeVisibleIfNecessary;
- (void)setView:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_orderSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

