
#import "NSObject.h"

@class NSDate, NSTimeZone;

@interface SBNotificationDateLabelDescription : NSObject
{
    NSDate *_startDate;
    NSTimeZone *_startDateTimeZone;
    NSDate *_endDate;
    NSTimeZone *_endDateTimeZone;
}


@end

