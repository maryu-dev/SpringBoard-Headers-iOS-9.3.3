
#import "SBLockOverlayViewController.h"

@class SBLockScreenUserPictureView, UMUser;

@interface SBLockScreenUserPictureViewController : SBLockOverlayViewController
{
    UMUser *_user;
    SBLockScreenUserPictureView *_userPictureView;
    _Bool _notificationListVisible;
}

- (void)_notificationListDidDisappear:(id)arg1;
- (void)_notificationListDidAppear:(id)arg1;
- (_Bool)shouldBeHidden;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

