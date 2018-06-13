
#import "SBCCSettingModule.h"

#import "RadiosPreferencesDelegate.h"

@class RadiosPreferences;

@interface SBCCAirplaneModeSetting : SBCCSettingModule <RadiosPreferencesDelegate>
{
    RadiosPreferences *_airplaneModeController;
}

+ (id)displayName;
+ (id)identifier;
- (void)airplaneModeChanged;
- (id)glyphImageForState:(int)arg1;
- (void)_updateState;
- (_Bool)_toggleState;
- (void)deactivate;
- (void)activate;
- (id)aggdKey;
- (void)dealloc;

@end

