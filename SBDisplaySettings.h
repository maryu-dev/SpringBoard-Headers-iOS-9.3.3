
#import "NSObject.h"

#import "SBDisplaySettings.h"

@class NSString, SBActivationSettings, SBDeactivationSettings, SBProcessSettings, SBStateSettings;

@interface SBDisplaySettings : NSObject <SBDisplaySettings>
{
    SBActivationSettings *_activationSettings;
    SBDeactivationSettings *_deactivationSettings;
    SBStateSettings *_stateSettings;
    SBProcessSettings *_processSettings;
}

@property(readonly, copy) NSString *description;
- (void)clearProcessSettings;
- (void)applyProcessSettings:(id)arg1;
- (id)copyProcessSettings;
- (id)objectForProcessSetting:(long long)arg1;
- (void)setObject:(id)arg1 forProcessSetting:(long long)arg2;
- (_Bool)boolForProcessSetting:(long long)arg1;
- (long long)flagForProcessSetting:(long long)arg1;
- (void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;
- (void)clearStateSettings;
- (void)applyStateSettings:(id)arg1;
- (id)copyStateSettings;
- (id)objectForStateSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forStateSetting:(unsigned int)arg2;
- (_Bool)boolForStateSetting:(unsigned int)arg1;
- (long long)flagForStateSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forStateSetting:(unsigned int)arg2;
- (void)clearDeactivationSettings;
- (void)applyDeactivationSettings:(id)arg1;
- (id)copyDeactivationSettings;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (_Bool)boolForDeactivationSetting:(unsigned int)arg1;
- (long long)flagForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)clearActivationSettings;
- (void)applyActivationSettings:(id)arg1;
- (id)copyActivationSettings;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (_Bool)boolForActivationSetting:(unsigned int)arg1;
- (long long)flagForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

