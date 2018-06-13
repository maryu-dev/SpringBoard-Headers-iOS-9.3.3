
#import "NSObject.h"

@class NSDate, SBDateTimeController;

@protocol SBDateTimeOverrideObserver <NSObject>
- (void)controller:(SBDateTimeController *)arg1 didChangeOverrideDateFromDate:(NSDate *)arg2;
@end

