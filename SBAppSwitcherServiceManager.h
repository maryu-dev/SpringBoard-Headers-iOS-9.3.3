
#import "NSObject.h"

@class SBAppSwitcherServiceSet;

@interface SBAppSwitcherServiceManager : NSObject
{
    SBAppSwitcherServiceSet *_services;
}

+ (id)sharedInstance;
- (id)registeredServicesSnapshot;
- (void)unregisterService:(id)arg1;
- (void)registerService:(id)arg1;

@end

