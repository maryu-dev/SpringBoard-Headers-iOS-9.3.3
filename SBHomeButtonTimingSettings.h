
#import "_UISettings.h"

@interface SBHomeButtonTimingSettings : _UISettings
{
    double _tapDuration;
    double _delay;
}

+ (id)createWithDuration:(double)arg1 delay:(double)arg2;
+ (id)settingsControllerModule;
- (id)description;
- (void)setDefaultValues;
- (id)displayName;

@end

