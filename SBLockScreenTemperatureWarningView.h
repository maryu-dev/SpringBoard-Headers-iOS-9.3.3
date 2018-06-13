
#import "SBLockOverlayView.h"

@class UIImageView;

@interface SBLockScreenTemperatureWarningView : SBLockOverlayView
{
    UIImageView *_warningIconView;
}

- (void)layoutSubviews;
- (double)_iconYPosition;
- (double)_subtitleBaseline;
- (double)_titleBaseline;
- (id)_subtitleFont;
- (id)_titleFont;
- (id)initWithFrame:(struct CGRect)arg1;

@end

