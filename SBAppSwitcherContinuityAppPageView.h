
#import "SBMainAppSwitcherPageView.h"

@class SBSaturatedIconView, UILabel, UIView;

@interface SBAppSwitcherContinuityAppPageView : SBMainAppSwitcherPageView
{
    UIView *_infoView;
    UIView *_iconTintView;
    SBSaturatedIconView *_saturatedIconView;
    UILabel *_deviceNameLabelBackdrop;
    UILabel *_deviceNameLabelForeground;
    double _deviceLabelOffset;
}

- (void)_viewDismissing:(id)arg1;
- (id)auxiliaryView;
- (void)layoutSubviews;
- (double)_heightForDeviceLabel:(id)arg1 withWidth:(double)arg2;
- (void)setView:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 suggestedApp:(id)arg2;

@end

