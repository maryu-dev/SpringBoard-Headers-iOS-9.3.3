
#import "SBCCSettingModule.h"

@interface SBCCPersonalHotspotSetting : SBCCSettingModule
{
}

+ (_Bool)enabledByDefault;
+ (id)displayName;
+ (id)identifier;
- (id)glyphImageForState:(int)arg1;
- (void)_updateState;
- (_Bool)_toggleState;
- (void)deactivate;
- (void)activate;
- (id)aggdKey;
- (void)dealloc;

@end

