
#import "NSObject.h"

@class NCBannerAccessoryHostViewController;

@protocol NCBannerAccessoryHostViewControllerDelegate <NSObject>

@optional
- (void)hostViewController:(NCBannerAccessoryHostViewController *)arg1 didRequestSticky:(_Bool)arg2;
- (void)hostViewControllerDidRequestSticky:(NCBannerAccessoryHostViewController *)arg1;
- (void)hostViewControllerDidRequestDismissal:(NCBannerAccessoryHostViewController *)arg1;
@end

