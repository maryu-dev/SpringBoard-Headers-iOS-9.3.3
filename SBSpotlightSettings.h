
#import "_UISettings.h"

@interface SBSpotlightSettings : _UISettings
{
    _Bool _enableSpotlightHomeScreenGesture;
    _Bool _enableSpotlightOnMinusPage;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

