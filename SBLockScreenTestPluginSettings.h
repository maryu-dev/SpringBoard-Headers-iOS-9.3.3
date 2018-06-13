
#import "_UISettings.h"

@interface SBLockScreenTestPluginSettings : _UISettings
{
    _Bool _enablePlugin;
    _Bool _enableLostModePlugin;
    _Bool _showDateView;
    _Bool _showDate;
    _Bool _disableOnUnlock;
    _Bool _showCamera;
    _Bool _showBackgroundView;
    unsigned long long _overlayStyle;
    unsigned long long _notificationBehavior;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

