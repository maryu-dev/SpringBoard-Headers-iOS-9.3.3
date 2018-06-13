
#import "UIView.h"

@class _UILegibilitySettings;

@interface SBLockScreenBatteryChargingView : UIView
{
    _UILegibilitySettings *_legibilitySettings;
}

+ (id)maskImageNameForExternalChargingBattery;
+ (id)maskImageNameForInternalChargingBattery;
+ (id)maskImageNameForChargingBattery;
+ (id)batteryChargingViewWithDoubleBattery;
+ (id)batteryChargingViewWithSingleBattery;
- (id)_chargePercentFont;
- (id)_updateChargeString:(id)arg1 oldLabel:(id)arg2;
@property(nonatomic) _Bool batteryVisible;
@property(readonly, nonatomic) double desiredVisibilityDuration;
- (void)setSecondaryChargePercentage:(long long)arg1 isCharging:(_Bool)arg2 deviceName:(id)arg3;
- (void)setPrimaryChargePercentage:(long long)arg1 isCharging:(_Bool)arg2 detailed:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

