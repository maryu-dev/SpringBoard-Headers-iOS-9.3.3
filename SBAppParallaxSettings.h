
#import "_UISettings.h"

@class SBFHomeScreenWallpaperParallaxSettings, SBFLockScreenWallpaperParallaxSettings, SBFParallaxSettings;

@interface SBAppParallaxSettings : _UISettings
{
    SBFLockScreenWallpaperParallaxSettings *_lockscreenWallpaperSettings;
    SBFHomeScreenWallpaperParallaxSettings *_homescreenWallpaperSettings;
    SBFParallaxSettings *_iconSettings;
    SBFParallaxSettings *_iconBadgeSettings;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

