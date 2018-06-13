
#import "_UISettings.h"

@class _UISettingsGroup;

@interface SBControlCenterButtonSectionSettings : _UISettings
{
    _UISettingsGroup *_settingsGroup;
}

+ (id)supportedButtonModuleClasses;
+ (id)buttonModuleClasses;
+ (id)settingsControllerModule;
- (id)buttonSortKeyForIdentifier:(id)arg1;
- (_Bool)buttonEnabledForIdentifier:(id)arg1;
- (void)setDefaultValues;
- (Class)buttonSettingsClass;

@end

