
#import "NSObject.h"

@class NSArray, NSDictionary, SBLogoutProgressAlertViewController;

@protocol SBLogoutProgressDataSource <NSObject>
- (NSArray *)pendingApplicationsForLogoutProgressAlertViewController:(SBLogoutProgressAlertViewController *)arg1;

@optional
- (NSDictionary *)debugBlockingTasksForLogoutProgressAlertViewController:(SBLogoutProgressAlertViewController *)arg1;
@end

