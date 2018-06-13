
#import "SBLockScreenBatteryChargingView.h"

@class NSArray, NSLayoutConstraint, SBLockScreenBatteryFillView, UIView, _UIBackdropView, _UILegibilityLabel;

@interface _SBLockScreenSingleBatteryChargingView : SBLockScreenBatteryChargingView
{
    UIView *_batteryContainerView;
    _UIBackdropView *_batteryBlurView;
    SBLockScreenBatteryFillView *_batteryFillView;
    _UILegibilityLabel *_chargePercentLabel;
    NSArray *_batteryConstraints;
    NSLayoutConstraint *_batteryTopOffset;
}

- (id)_chargePercentFont;
- (double)_batteryNoseOffset;
- (double)_batteryBaseline;
- (double)_chargingTextBaselineOffset;
- (void)_prepareConstraints;
- (void)layoutSubviews;
- (double)desiredVisibilityDuration;
- (void)setBatteryVisible:(_Bool)arg1;
- (_Bool)batteryVisible;
- (void)setPrimaryChargePercentage:(long long)arg1 isCharging:(_Bool)arg2 detailed:(_Bool)arg3;
- (void)setLegibilitySettings:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

