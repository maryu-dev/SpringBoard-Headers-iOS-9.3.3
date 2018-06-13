
#import "NSObject.h"

@class SBStarkNotificationViewController;

@protocol SBStarkNotificationViewControllerDelegate <NSObject>
- (void)notificationViewController:(SBStarkNotificationViewController *)arg1 stateDidChangeFrom:(int)arg2;
- (void)notificationViewController:(SBStarkNotificationViewController *)arg1 willDisplayBannerView:(id <SBUIBannerView>)arg2;
@end

