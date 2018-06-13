
#import "NSObject.h"

@class NSDictionary, UIViewController<NCInteractiveNotificationHost>;

@protocol NCInteractiveNotificationHostDelegate <NSObject>

@optional
- (void)hostViewController:(UIViewController<NCInteractiveNotificationHost> *)arg1 serviceRequestedDismissalEnabled:(_Bool)arg2;
- (void)hostViewController:(UIViewController<NCInteractiveNotificationHost> *)arg1 didEnable:(_Bool)arg2 actionAtIndex:(unsigned long long)arg3;
- (void)hostViewController:(UIViewController<NCInteractiveNotificationHost> *)arg1 didRequestDismissalWithContext:(NSDictionary *)arg2;
- (void)hostViewControllerDidChangePreferredContentSize:(UIViewController<NCInteractiveNotificationHost> *)arg1;
@end

