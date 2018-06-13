
#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAlertManager, SBAppStatusBarSettingsAssertion, SBWindowSelfHostWrapper, SBWorkspaceApplication;

@interface SBUIAnimationZoomUpAppsFromAlert : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;
    SBAlert *_alert;
    SBWorkspaceApplication *_primaryApp;
    SBWindowSelfHostWrapper *_appContextHostWrapper;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (double)animationDelay;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

