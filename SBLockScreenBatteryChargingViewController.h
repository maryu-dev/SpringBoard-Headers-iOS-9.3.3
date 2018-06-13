
#import "UIViewController.h"

@class NSMutableArray, NSTimer, SBLockScreenBatteryChargingView;

@interface SBLockScreenBatteryChargingViewController : UIViewController
{
    _Bool _shouldDisplayBattery;
    SBLockScreenBatteryChargingView *_chargingView;
    NSTimer *_visibilityTimer;
    _Bool _displayDetailedCharge;
    NSMutableArray *_connectedDevices;
    id <SBLockScreenBatteryChargingViewControllerDelegate> _delegate;
}

- (void)_visibilityTimerFired:(id)arg1;
- (void)showChargeLevelWithBatteryVisible:(_Bool)arg1;
- (id)chargingView;
- (_Bool)batteryVisible;
- (void)_clearVisibilityTimer;
- (void)prepareForDismissal;
- (void)loadView;
- (void)dealloc;
- (id)initForDisplayOfBattery:(_Bool)arg1;

@end

