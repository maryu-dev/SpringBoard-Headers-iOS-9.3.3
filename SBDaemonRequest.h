
#import "NSObject.h"

@interface SBDaemonRequest : NSObject
{
    id _enabler;
    id _disabler;
}

+ (id)requestWithEnabler:(id)arg1 disabler:(id)arg2;
- (void)dispatchDisablerOnQueue:(id)arg1;
- (void)dispatchEnablerOnQueue:(id)arg1;

@end

