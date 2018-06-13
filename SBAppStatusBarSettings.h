
#import "NSObject.h"

#import "BSSettingDescriptionProvider.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class BSMutableSettings, BSSettings, NSString;

@interface SBAppStatusBarSettings : NSObject <BSSettingDescriptionProvider, NSCopying, NSMutableCopying>
{
    BSMutableSettings *_settings;
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithBSSettings:(id)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

