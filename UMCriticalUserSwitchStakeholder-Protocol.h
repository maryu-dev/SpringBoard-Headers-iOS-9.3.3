
#import "NSObject.h"

@class NSDictionary, UMUser;

@protocol UMCriticalUserSwitchStakeholder <NSObject>
- (void)readyToSwitchToUser:(UMUser *)arg1;
- (void)willSwitchToUser:(UMUser *)arg1;

@optional
- (void)userSwitchBlockingTasksDidUpdate:(NSDictionary *)arg1;
@end

