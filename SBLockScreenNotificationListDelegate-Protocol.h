
#import "NSObject.h"

@class SBAwayBulletinListItem, UIScrollView;

@protocol SBLockScreenNotificationListDelegate <NSObject>
- (void)authenticateForNotificationActionWithCompletion:(void (^)(_Bool))arg1;
- (void)addCoordinatedPresentingController:(id <SBCoordinatedPresenting>)arg1;
- (void)removeCoordinatedPresentingController:(id <SBCoordinatedPresenting>)arg1;
- (void)dismissFullscreenBulletinAlertWithItem:(SBAwayBulletinListItem *)arg1;
- (void)modifyFullscreenBulletinAlertWithItem:(SBAwayBulletinListItem *)arg1;
- (void)presentFullscreenBulletinAlertWithItem:(SBAwayBulletinListItem *)arg1;
- (UIScrollView *)lockScreenScrollView;
- (void)notificationListBecomingVisible:(_Bool)arg1;
- (void)attemptToUnlockUIFromNotification;
- (void)bannerEnablementChanged;
@end

