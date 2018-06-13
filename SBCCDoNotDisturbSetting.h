
#import "SBCCSettingModule.h"

@class BBBehaviorOverride, BBSettingsGateway;

@interface SBCCDoNotDisturbSetting : SBCCSettingModule
{
    BBSettingsGateway *_settingsGateway;
    BBBehaviorOverride *_activeOverride;
    long long _activeStatus;
}

+ (id)displayName;
+ (id)identifier;
- (id)glyphImageForState:(int)arg1;
- (id)statusUpdate;
- (void)_updateActiveOverrides:(id)arg1;
- (void)_setDNDEnabled:(_Bool)arg1 updateServer:(_Bool)arg2 source:(unsigned long long)arg3;
- (void)_setDNDStatus:(long long)arg1;
- (void)_updateState;
- (_Bool)_toggleState;
- (void)_tearDown;
- (void)deactivate;
- (void)activate;
- (id)aggdKey;
- (void)dealloc;

@end

