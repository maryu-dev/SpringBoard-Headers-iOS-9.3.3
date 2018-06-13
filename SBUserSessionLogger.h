
#import "SBFileLogger.h"

@interface SBUserSessionLogger : SBFileLogger
{
}

- (_Bool)shouldEnableOnInternalBuilds;
- (id)logPreferenceName;
- (int)maxLogCount;
- (void)_setLevel:(int)arg1;
- (void)_setEnabled:(_Bool)arg1;
- (id)name;
- (int)level;

@end

