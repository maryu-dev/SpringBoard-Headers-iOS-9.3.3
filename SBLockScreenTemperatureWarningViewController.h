
#import "SBLockOverlayViewController.h"

@class NSString, SBLockScreenTemperatureWarningView;

@interface SBLockScreenTemperatureWarningViewController : SBLockOverlayViewController
{
    SBLockScreenTemperatureWarningView *_warningView;
}

@property(readonly, nonatomic) __weak NSString *slideToUnlockText;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

