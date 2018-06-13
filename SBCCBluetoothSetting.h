
#import "SBCCSettingModule.h"

@interface SBCCBluetoothSetting : SBCCSettingModule
{
}

+ (id)displayName;
+ (id)identifier;
- (id)confirmationAlertMessage;
- (id)confirmationAlertTitle;
- (void)confirmed:(_Bool)arg1;
- (_Bool)needsConfirmation;
- (id)glyphImageForState:(int)arg1;
- (void)_updateState;
- (_Bool)isRestricted;
- (_Bool)_toggleState;
- (void)deactivate;
- (void)activate;
- (id)aggdKey;
- (void)dealloc;

@end

