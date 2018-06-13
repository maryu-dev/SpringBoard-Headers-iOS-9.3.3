
#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "BSSettingDescriptionProvider.h"
#import "NSCopying.h"
#import "SBActivationSettings.h"

@class BSMutableSettings, NSString;

@interface SBActivationSettings : NSObject <BSSettingDescriptionProvider, SBActivationSettings, NSCopying, BSDescriptionProviding>
{
    BSMutableSettings *_settings;
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)clearActivationSettings;
- (void)applyActivationSettings:(id)arg1;
- (id)copyActivationSettings;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (_Bool)boolForActivationSetting:(unsigned int)arg1;
- (long long)flagForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

