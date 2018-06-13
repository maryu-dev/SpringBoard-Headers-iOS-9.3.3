
#import "UIView.h"

@class UIBlurEffect, UIVisualEffectView;

@interface SBApplicationShortcutMenuBackgroundView : UIView
{
    double _cornerRadius;
    UIVisualEffectView *_backdropView;
    UIView *_dimmingKnockoutView;
    UIBlurEffect *_blurEffect;
}

- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

