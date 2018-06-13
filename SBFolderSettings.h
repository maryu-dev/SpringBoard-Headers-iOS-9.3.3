
#import "_UISettings.h"

@interface SBFolderSettings : _UISettings
{
    _Bool _allowNestedFolders;
    _Bool _pinchToClose;
    _Bool _oneColumnAtATime;
    _Bool _sortsIconsAlphabetically;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

