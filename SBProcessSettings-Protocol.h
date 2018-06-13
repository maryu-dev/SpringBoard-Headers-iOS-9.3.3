
#import "NSObject.h"

@class SBProcessSettings;

@protocol SBProcessSettings <NSObject>
- (void)clearProcessSettings;
- (void)applyProcessSettings:(SBProcessSettings *)arg1;
- (SBProcessSettings *)copyProcessSettings;
- (id)objectForProcessSetting:(long long)arg1;
- (void)setObject:(id)arg1 forProcessSetting:(long long)arg2;
- (_Bool)boolForProcessSetting:(long long)arg1;
- (long long)flagForProcessSetting:(long long)arg1;
- (void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;
@end

