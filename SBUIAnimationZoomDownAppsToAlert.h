
#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBAppStatusBarSettingsAssertion, SBWindowSelfHostWrapper, SBWorkspaceApplication;

@interface SBUIAnimationZoomDownAppsToAlert : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;
    SBWorkspaceApplication *_primaryApp;
    SBWindowSelfHostWrapper *_appContextHostWrapper;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}

- (void)_animationFinished;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

