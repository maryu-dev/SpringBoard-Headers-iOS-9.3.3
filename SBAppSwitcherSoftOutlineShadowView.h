
#import "UIView.h"

@class UIImageView;

@interface SBAppSwitcherSoftOutlineShadowView : UIView
{
    UIView *_clippingView;
    UIImageView *_shadowImageView;
}

- (void)layoutSubviews;
@property(nonatomic) struct CGRect clippingFrame;
@property(nonatomic) double clippingCornerRadius;
@property(nonatomic) _Bool shouldClip;
- (id)initWithFrame:(struct CGRect)arg1;

@end

