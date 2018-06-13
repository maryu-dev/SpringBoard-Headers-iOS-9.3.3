
#import "SBFileLogger.h"

@interface SBStatusBarishLogger : SBFileLogger
{
    _Bool _useCustomDestinations;
    unsigned long long _customDestinations;
}

- (_Bool)shouldEnableOnInternalBuilds;
- (void)reloadFromDefaults;
- (unsigned long long)logDestinations;
- (id)logPreferenceName;
- (id)logPrefixForCategory:(id)arg1 destination:(unsigned long long)arg2;
- (void)_setLevel:(int)arg1;
- (void)_setEnabled:(_Bool)arg1;
- (id)name;
- (int)level;

@end

