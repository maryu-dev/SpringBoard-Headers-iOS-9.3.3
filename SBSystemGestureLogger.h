
#import "SBFileLogger.h"

@interface SBSystemGestureLogger : SBFileLogger
{
}

- (void)_disableAllCategories;
- (void)reloadFromDefaults;
- (id)logPrefixForCategory:(id)arg1 destination:(unsigned long long)arg2;
- (id)logPreferenceName;
- (void)_setLevel:(int)arg1;
- (void)_setEnabled:(_Bool)arg1;
- (id)name;
- (int)level;
- (id)init;

@end

