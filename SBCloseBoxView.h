
#import "UIButton.h"

@class SBIconBlurryBackgroundView, SBIconColorSettings, UIImageView, UIView;

@interface SBCloseBoxView : UIButton
{
    SBIconBlurryBackgroundView *_backgroundView;
    UIView *_whiteTintView;
    UIImageView *_xColorBurnView;
    UIImageView *_xPlusDView;
    SBIconColorSettings *_colorSettings;
    struct CGPoint _wallpaperRelativeCenter;
}

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setSuppressesBlurryBackgroundChanges:(_Bool)arg1;
- (void)setLegibilityStyle:(long long)arg1;
- (void)setWallpaperRelativeCenter:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

