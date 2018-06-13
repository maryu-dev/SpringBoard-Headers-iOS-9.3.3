
#import "SBCCSettingModule.h"

@class CBBlueLightClient;

@interface SBCCNightShiftSetting : SBCCSettingModule
{
    CBBlueLightClient *_blueLightReductionClient;
    id _currentStatus;
}

+ (_Bool)_isSupported;
+ (_Bool)isSupported:(int)arg1;
+ (id)displayName;
+ (id)identifier;
- (id)_timeFormatterForLocale:(id)arg1;
- (_Bool)_uses24HourTimeForLocale:(id)arg1;
- (id)_formatCardinalityForTransitionTime:(id)arg1 forLocale:(id)arg2;
- (id)_statusUpdateFormatStringForBlueLightEnabled:(_Bool)arg1 transitionTime:(id)arg2 forLocale:(id)arg3;
- (id)_statusUpdateFormatStringForBlueLightEnabled:(_Bool)arg1 transitionTime:(id)arg2;
- (id)_timeStringForBlueLightTransitionTime:(id)arg1 forLocale:(id)arg2;
- (id)_timeStringForBlueLightTransitionTime:(id)arg1;
- (id)_statusUpdateForBlueLightStatus:(id)arg1 forLocale:(id)arg2;
- (id)_statusUpdateForBlueLightStatus:(id)arg1;
- (id)_alertControllerForDisablingAccessibilityScreenFilter:(id)arg1 cancelBlock:(id)arg2;
- (void)_setNightShiftEnabled:(_Bool)arg1;
- (void)_getBlueLightStatus:(id)arg1;
- (id)glyphImageForState:(int)arg1;
- (_Bool)_toggleState;
- (void)_updateState;
- (id)statusUpdate;
- (_Bool)isRestricted;
- (void)deactivate;
- (void)activate;
- (id)aggdKey;

@end

