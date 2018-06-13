
#import "SBUIMainScreenAnimationController.h"

@class SBUILockScreenNotificationAnimationHandler;

@interface SBUIAnimationFadeLockScreenWithNotificationsToSpringBoard : SBUIMainScreenAnimationController
{
    SBUILockScreenNotificationAnimationHandler *_notificationAnimationHandler;
}

- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

