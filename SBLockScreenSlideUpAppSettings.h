
#import "_UISettings.h"

@interface SBLockScreenSlideUpAppSettings : _UISettings
{
    long long _slideUpAppSelection;
}

+ (id)settingsControllerModule;
- (id)imageNameForCurrentSelection;
- (id)bundleIdentifierForCurrentSelection;
- (void)setDefaultValues;

@end

