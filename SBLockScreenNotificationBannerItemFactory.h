
#import "NSObject.h"

@interface SBLockScreenNotificationBannerItemFactory : NSObject
{
}

+ (id)sharedInstance;
- (id)bannerItemWithAwayListItem:(id)arg1 unlockActionHandler:(id)arg2 delegate:(id)arg3;
- (_Bool)supportsAwayListItem:(id)arg1;

@end

