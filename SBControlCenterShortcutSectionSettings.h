
#import "SBControlCenterButtonSectionSettings.h"

@interface SBControlCenterShortcutSectionSettings : SBControlCenterButtonSectionSettings
{
}

+ (id)supportedButtonModuleClasses;
+ (id)buttonModuleClasses;
- (Class)buttonSettingsClass;

@end

