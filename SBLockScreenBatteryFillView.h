
#import "UIView.h"

@interface SBLockScreenBatteryFillView : UIView
{
    long long _chargePercentage;
    long long _lowBatteryLevel;
    _Bool _isInternalBattery;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)setChargePercentage:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isInternalBattery:(_Bool)arg2 lowBatteryLevel:(long long)arg3;

@end

