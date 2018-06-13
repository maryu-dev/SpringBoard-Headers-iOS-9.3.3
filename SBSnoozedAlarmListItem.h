
#import "SBAwayListItem.h"

@class NSDate, UIImage, UILocalNotification;

@interface SBSnoozedAlarmListItem : SBAwayListItem
{
    UILocalNotification *_localNotification;
    UIImage *_iconImage;
}

- (_Bool)canBeRemovedByUnlock;
- (_Bool)canBeRemovedByNotificationCenterPresentation;
- (id)sortDate;
@property(readonly, nonatomic) NSDate *fireDate;
- (id)init;

@end

