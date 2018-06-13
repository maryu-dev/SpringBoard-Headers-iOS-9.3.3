
#import "SBAlert.h"

#import "SBPowerDownViewDelegate.h"

@class SBAlertView<SBPowerDownViewInterface>;

@interface SBPowerDownController : SBAlert <SBPowerDownViewDelegate>
{
    id _delegate;
    SBAlertView<SBPowerDownViewInterface> *_powerDownView;
    id _orderOutCompletion;
}

- (void)_lockedOnTop;
- (void)_restoreIconListIfNecessary;
- (void)powerDownViewAnimateOutCompleted:(id)arg1;
- (void)powerDownViewRequestPowerDown:(id)arg1;
- (void)powerDownViewRequestCancel:(id)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (double)autoLockTime;
- (void)activate;
- (_Bool)showsSpringBoardStatusBar;
- (_Bool)managesOwnStatusBarAtActivation;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (_Bool)hasTranslucentBackground;
- (void)cancel;
- (void)powerDown;
- (void)orderOutWithCompletion:(id)arg1;
- (void)orderFront;
- (void)dealloc;
- (id)init;

@end

