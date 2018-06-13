
#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "BSSettingDescriptionProvider.h"
#import "NSCopying.h"
#import "SBDeactivationSettings.h"

@class BSMutableSettings, NSString;

@interface SBDeactivationSettings : NSObject <BSSettingDescriptionProvider, SBDeactivationSettings, NSCopying, BSDescriptionProviding>
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
- (void)clearDeactivationSettings;
- (void)applyDeactivationSettings:(id)arg1;
- (id)copyDeactivationSettings;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (_Bool)boolForDeactivationSetting:(unsigned int)arg1;
- (long long)flagForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

