
#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAppStatusBarSettingsAssertion, SBDisableAppStatusBarAlphaChangesAssertion, SBWindow, UIView, UIView<FBSceneHostView>;

@interface SBUIAnimationFadeAlertToHostedApp : SBUIMainScreenAnimationController
{
    SBWindow *_transitionWindow;
    SBAlert *_deactivatingAlert;
    UIView<FBSceneHostView> *_viewToAnimate;
    _Bool _reallyFinishedAnimating;
    SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAlphaChangeAssertion;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    long long _launchingOrientation;
    UIView *_fakeStatusBarViewContainer;
    _Bool _appIsTranslucent;
}

- (void)_removeFakeStatusBarIfNecessary;
- (void)_showFakeStatusBarIfNecessary;
- (void)_setupFakeStatusBarIfNecessary;
- (void)_maybeReportAnimationFinished;
- (_Bool)_areApplicationLaunchesFinished;
- (void)_applicationDependencyStateChanged;
- (void)_noteAnimationDidFinish;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)_animationProgressDependencies;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)_setHidden:(_Bool)arg1;
- (id)_getTransitionWindow;
- (void)_reallyFinishedAnimating;
- (_Bool)_shouldAnimateWallpaper;
- (id)_deactivatingAlert;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

