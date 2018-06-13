
#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "BSSettingDescriptionProvider.h"
#import "NSCopying.h"
#import "SBStateSettings.h"

@class BSMutableSettings, NSString;

@interface SBStateSettings : NSObject <BSSettingDescriptionProvider, SBStateSettings, NSCopying, BSDescriptionProviding>
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
- (void)clearStateSettings;
- (void)applyStateSettings:(id)arg1;
- (id)copyStateSettings;
- (id)objectForStateSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forStateSetting:(unsigned int)arg2;
- (_Bool)boolForStateSetting:(unsigned int)arg1;
- (long long)flagForStateSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forStateSetting:(unsigned int)arg2;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

