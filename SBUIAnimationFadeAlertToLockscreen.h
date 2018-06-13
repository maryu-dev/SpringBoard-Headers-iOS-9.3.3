
#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBAppStatusBarSettingsAssertion, SBLockScreenViewController, SBWorkspaceAlert;

@interface SBUIAnimationFadeAlertToLockscreen : SBUIMainScreenAnimationController
{
    SBLockScreenViewController *_lockScreenViewController;
    SBWorkspaceAlert *_deactivatingAlert;
    SBAlertManager *_alertManager;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (double)animationDelay;
- (double)animationDuration;
- (void)_prepareAnimation;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

