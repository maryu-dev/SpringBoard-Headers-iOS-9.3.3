
#import "_UISettings.h"

@interface SBSoftwareUpdateSettings : _UISettings
{
    unsigned long long _defaultRepopDuration;
    unsigned long long _repopStrategyTest;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

