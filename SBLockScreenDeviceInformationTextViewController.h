
#import "UIViewController.h"

@interface SBLockScreenDeviceInformationTextViewController : UIViewController
{
    _Bool _inLostMode;
}

- (void)profileStateChangedNotification:(id)arg1;
- (void)_updateText;
- (id)deviceInformationTextView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

@end

