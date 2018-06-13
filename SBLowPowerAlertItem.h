
#import "SBAlertItem.h"

@interface SBLowPowerAlertItem : SBAlertItem
{
    unsigned int _talkLevel;
    long long _lowPowerButtonIndex;
    long long _closeButtonIndex;
}

+ (void)setBatteryLevel:(unsigned int)arg1;
+ (_Bool)_shouldIgnoreChangeToBatteryLevel:(unsigned int)arg1;
+ (unsigned int)_thresholdForLevel:(unsigned int)arg1;
+ (void)initialize;
+ (void)saveLowBatteryLogWithCapacity:(int)arg1 voltage:(int)arg2;
+ (id)systemVersionDescription;
- (_Bool)undimsScreen;
- (_Bool)shouldShowInEmergencyCall;
- (_Bool)shouldShowInLockScreen;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_enableLowPowerMode;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)isLowPowerModeSupported;
- (void)willPresentAlertView:(id)arg1;
- (id)initWithLevel:(unsigned int)arg1;
- (id)init;

@end

