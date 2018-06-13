
#import "NSObject.h"

@protocol SBNotificationCenterWidgetHost <NSObject>

@optional
@property(nonatomic) __weak id <SBWidgetViewControllerDelegate> widgetDelegate;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
@end

