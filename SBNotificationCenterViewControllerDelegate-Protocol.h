
#import "SBBulletinActionHandler.h"
#import "SBWidgetViewControllerDelegate.h"

@class SBNotificationCenterViewController;

@protocol SBNotificationCenterViewControllerDelegate <SBWidgetViewControllerDelegate, SBBulletinActionHandler>

@optional
- (id <SBWidgetViewControllerDelegate>)widgetViewControllerHostDelegate:(SBNotificationCenterViewController *)arg1;
@end

