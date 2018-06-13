
#import "_UISettings.h"

@class NSString;

@interface SBControlCenterButtonSettings : _UISettings
{
    _Bool _enabled;
    NSString *_displayName;
    NSString *_identifier;
}

+ (id)createWithSettingClass:(Class)arg1;
+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

