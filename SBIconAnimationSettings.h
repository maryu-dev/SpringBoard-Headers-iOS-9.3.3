
#import "_UISettings.h"

@class SBAnimationSettings;

@interface SBIconAnimationSettings : _UISettings
{
    SBAnimationSettings *_centralAnimationSettings;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

