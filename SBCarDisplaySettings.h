
#import "_UISettings.h"

@interface SBCarDisplaySettings : _UISettings
{
    _Bool _animateLockOutModeChanges;
    long long _lockOutMode;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

