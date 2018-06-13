
#import "UIView.h"

@class _UIBackdropView;

@interface _SBLayoutElementPinResizeGrabberVibrantView : UIView
{
    _UIBackdropView *_blurView;
    UIView *_colorDodgeView;
    UIView *_plusLView;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

