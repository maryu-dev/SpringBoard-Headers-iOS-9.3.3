
#import "NSObject.h"

@class BBAction, BBBulletin;

@protocol SBBannerPresentingAlertItemDelegate <NSObject>
- (void)presentBannerForBulletin:(BBBulletin *)arg1 action:(BBAction *)arg2;
@end

