
#import "NSObject.h"

@class SBReachabilityTrigger;

@protocol SBReachabilityTriggerDelegate <NSObject>
- (void)triggerDidTriggerReachability:(SBReachabilityTrigger *)arg1;
@end

