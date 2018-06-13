
#import "_UISettings.h"

@class SBAnimationSettings;

@interface SBFadeAnimationSettings : _UISettings
{
    double _backlightFadeDuration;
    SBAnimationSettings *_dateInSettings;
    SBAnimationSettings *_overlayInSettings;
    SBAnimationSettings *_contentInSettings;
    SBAnimationSettings *_wallpaperInSettings;
    SBAnimationSettings *_dateOutSettings;
    SBAnimationSettings *_overlayOutSettings;
    SBAnimationSettings *_wallpaperOutSettings;
    struct CGRect _wallpaperInContentsRect;
    struct CGRect _wallpaperOutContentsRect;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

