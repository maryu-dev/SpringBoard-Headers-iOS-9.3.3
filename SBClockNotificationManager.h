
#import "NSObject.h"

#import "UNSNotificationSchedulerDelegate.h"

@class NSString, UNSNotificationScheduler;

@interface SBClockNotificationManager : NSObject <UNSNotificationSchedulerDelegate>
{
    UNSNotificationScheduler *_notificationScheduler;
}

+ (id)sharedInstance;
- (void)notificationScheduler:(id)arg1 didChangeScheduledLocalNotifications:(id)arg2;
- (void)notificationScheduler:(id)arg1 didFireLocalNotifications:(id)arg2;
- (void)snoozeScheduledLocalNotification:(id)arg1 withCompletion:(id)arg2;
- (void)cancelScheduledLocalNotification:(id)arg1;
- (id)scheduledLocalNotifications;
- (void)scheduledLocalNotificationsWithResult:(id)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

