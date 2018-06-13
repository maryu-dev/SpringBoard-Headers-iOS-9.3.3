
#import "UIViewController.h"

@class SBUIVibrantButton;

@interface SBLockScreenLogoutButtonViewController : UIViewController
{
    id <SBLockScreenLogoutButtonViewControllerDelegate> _delegate;
}

- (void)buttonPressed:(id)arg1;
@property(readonly, nonatomic) SBUIVibrantButton *button;
- (void)loadView;

@end

