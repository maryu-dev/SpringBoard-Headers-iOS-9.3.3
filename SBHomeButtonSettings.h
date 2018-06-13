
#import "_UISettings.h"

@class _UISettingsGroup;

@interface SBHomeButtonSettings : _UISettings
{
    _Bool _doubleTapOnMenuDown;
    _Bool _useDynamicTapTiming;
    _UISettingsGroup *_tapTimingGroup;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

