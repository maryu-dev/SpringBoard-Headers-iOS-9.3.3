
#import "UIView.h"

@class SBBannerContextView;

@interface SBBannerContainerView : UIView
{
    _Bool _modal;
    _Bool _highlighted;
    SBBannerContextView *_bannerView;
    UIView *_backgroundView;
    UIView *_inlayView;
    double _maximumHeight;
    UIView *_inlayContainerView;
}

- (double)_bannerBottomY;
- (struct CGRect)_inlineContainerFrame;
- (struct CGRect)_backgroundFrame;
- (void)_layoutBackgroundView;
- (void)_layoutInlayContainerView;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

