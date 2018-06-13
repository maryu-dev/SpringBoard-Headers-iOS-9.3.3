
#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_source>;

@interface SBDaemonContext : NSObject
{
    NSObject<OS_dispatch_source> *_dispatchSource;
    NSMutableDictionary *_daemonRequests;
    int _pid;
}

- (id)description;
- (void)removeRequestForKey:(id)arg1;
- (void)addRequest:(id)arg1 forKey:(id)arg2;
- (void)_handleCancelation;
- (id)_newDispatchSourceForPid:(int)arg1 queue:(id)arg2;
- (int)pid;
- (id)initWithPid:(int)arg1 queue:(id)arg2;

@end

