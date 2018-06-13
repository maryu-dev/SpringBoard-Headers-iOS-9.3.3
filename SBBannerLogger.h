
#import "SBFileLogger.h"

@interface SBBannerLogger : SBFileLogger
{
}

- (id)logPrefixForCategory:(id)arg1 destination:(unsigned long long)arg2;
- (id)logPreferenceName;
- (void)_setLevel:(int)arg1;
- (void)_setEnabled:(_Bool)arg1;
- (id)name;
- (int)level;

@end

