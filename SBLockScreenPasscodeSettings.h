
#import "_UISettings.h"

@interface SBLockScreenPasscodeSettings : _UISettings
{
    int _scrollBehavior;
    double _fixedHysteresis;
    double _percentOfNextButtonIncluded;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

