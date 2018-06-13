
#import "NSObject.h"

@class NSIndexPath, SBAwayListItem;

@protocol SBLockScreenNotificationModel <NSObject>
- (SBAwayListItem *)listItemAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)count;
@end

