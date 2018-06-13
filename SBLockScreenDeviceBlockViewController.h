
#import "SBLockOverlayViewController.h"

@class NSString, SBFDeviceBlockTimer;

@interface SBLockScreenDeviceBlockViewController : SBLockOverlayViewController
{
    SBFDeviceBlockTimer *_blockTimer;
}

- (void)start;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(readonly, nonatomic) __weak NSString *slideToUnlockText;
- (void)dealloc;

@end

