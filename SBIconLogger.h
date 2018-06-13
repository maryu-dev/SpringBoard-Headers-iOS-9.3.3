
#import "SBFileLogger.h"

@interface SBIconLogger : SBFileLogger
{
}

- (id)logPrefixForCategory:(id)arg1 destination:(unsigned long long)arg2;
- (id)logPreferenceName;
- (int)maxLogCount;
- (void)_setLevel:(int)arg1;
- (void)_setEnabled:(_Bool)arg1;
- (id)name;
- (int)level;

@end

