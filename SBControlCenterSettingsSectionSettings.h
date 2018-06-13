
#import "SBControlCenterButtonSectionSettings.h"

@interface SBControlCenterSettingsSectionSettings : SBControlCenterButtonSectionSettings
{
}

+ (id)supportedButtonModuleClasses;
+ (id)buttonModuleClasses;
- (Class)buttonSettingsClass;

@end

