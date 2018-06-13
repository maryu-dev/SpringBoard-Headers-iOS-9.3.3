
#import "NSObject.h"

@class NSDate, NSTimeZone;

@protocol NCNotificationDateLabel <NSObject>
@property(nonatomic) _Bool isTimestamp;
@property(nonatomic) int labelType;
@property(nonatomic) id <SBDateLabelDelegate> delegate;
@property(nonatomic, getter=isAllDay) _Bool allDay;
- (void)prepareForReuse;
- (void)stopCoalescingUpdates;
- (void)startCoalescingUpdates;
- (void)setEndDate:(NSDate *)arg1 withTimeZone:(NSTimeZone *)arg2;
- (void)setStartDate:(NSDate *)arg1 withTimeZone:(NSTimeZone *)arg2;
@end

