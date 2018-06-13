
#import "SBCCSettingModule.h"

@interface SBCCMuteSetting : SBCCSettingModule
{
}

+ (_Bool)isSupported:(int)arg1;
+ (id)displayName;
+ (id)identifier;
- (id)glyphImageForState:(int)arg1;
- (void)_updateState;
- (_Bool)_toggleState;
- (void)_tearDown;
- (_Bool)isRestricted;
- (void)deactivate;
- (void)activate;
- (id)aggdKey;
- (void)dealloc;

@end

