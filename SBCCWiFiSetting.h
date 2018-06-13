
#import "SBCCSettingModule.h"

@interface SBCCWiFiSetting : SBCCSettingModule
{
}

+ (id)displayName;
+ (id)identifier;
- (id)glyphImageForState:(int)arg1;
- (void)_updateState;
- (_Bool)_toggleState;
- (void)_updateWifiNotification:(id)arg1;
- (void)_tearDown;
- (void)deactivate;
- (void)activate;
- (id)aggdKey;
- (void)dealloc;

@end

