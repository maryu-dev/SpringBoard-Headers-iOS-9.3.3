
#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "BSSettingDescriptionProvider.h"
#import "NSCopying.h"
#import "SBProcessSettings.h"

@class BSMutableSettings, NSString;

@interface SBProcessSettings : NSObject <BSSettingDescriptionProvider, SBProcessSettings, NSCopying, BSDescriptionProviding>
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
- (void)clearProcessSettings;
- (void)applyProcessSettings:(id)arg1;
- (id)copyProcessSettings;
- (id)objectForProcessSetting:(long long)arg1;
- (void)setObject:(id)arg1 forProcessSetting:(long long)arg2;
- (_Bool)boolForProcessSetting:(long long)arg1;
- (long long)flagForProcessSetting:(long long)arg1;
- (void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

