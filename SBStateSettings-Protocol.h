
#import "NSObject.h"

@class SBStateSettings;

@protocol SBStateSettings <NSObject>
- (void)clearStateSettings;
- (void)applyStateSettings:(SBStateSettings *)arg1;
- (SBStateSettings *)copyStateSettings;
- (id)objectForStateSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forStateSetting:(unsigned int)arg2;
- (_Bool)boolForStateSetting:(unsigned int)arg1;
- (long long)flagForStateSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forStateSetting:(unsigned int)arg2;
@end

