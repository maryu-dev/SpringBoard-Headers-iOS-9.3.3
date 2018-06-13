
#import "NSObject.h"

@interface SBUserNotificationCenter : NSObject
{
}

+ (void)_userNotificationDone:(id)arg1;
+ (void)startUserNotificationCenter;
+ (void)dispatchUserNotificationFromMachMessage:(id *)arg1 auditToken:(const id *)arg2;

@end

