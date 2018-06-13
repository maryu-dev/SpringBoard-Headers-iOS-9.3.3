
#import "NSObject.h"

@class SBLockScreenNotificationBannerItem;

@protocol SBLockScreenNotificationBannerItemDelegate <NSObject>
- (void)bannerItemWasTapped:(SBLockScreenNotificationBannerItem *)arg1;
@end

