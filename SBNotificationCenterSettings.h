
#import "_UISettings.h"

@class SBBounceSettings;

@interface SBNotificationCenterSettings : _UISettings
{
    SBBounceSettings *_bounceSettings;
    double _grabberAnimationDuration;
    double _actionButtonVibrantTintLevel;
    double _actionButtonVibrantTintAlpha;
    double _actionButtonSelectedVibrantTintLevel;
    double _actionButtonSelectedVibrantTintAlpha;
    double _actionButtonOverlayTintLevel;
    double _actionButtonOverlayTintAlpha;
    double _actionButtonSelectedOverlayTintLevel;
    double _actionButtonSelectedOverlayTintAlpha;
    double _modeButtonTintLevel;
    double _modeButtonTintAlpha;
    double _modeLabelTintLevel;
    double _modeLabelTintAlpha;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

