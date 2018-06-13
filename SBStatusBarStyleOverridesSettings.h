
#import "_UISettings.h"

@interface SBStatusBarStyleOverridesSettings : _UISettings
{
    _Bool _exclusive;
    _Bool _showsWhenForeground;
    int _styleOverride;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

