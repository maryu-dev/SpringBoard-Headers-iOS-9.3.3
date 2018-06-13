
#import "SBUIMainScreenAnimationController.h"

@class NSMutableArray, SBAlert, SBAppStatusBarSettingsAssertion, SBSceneLayoutAnimationWrapperView, SBUILockScreenNotificationAnimationHandler, SBWindowSelfHostWrapper, UIView;

@interface SBUIAnimationLockScreenToAppZoomIn : SBUIMainScreenAnimationController
{
    SBAlert *_fromAlert;
    SBSceneLayoutAnimationWrapperView *_animationWrapperView;
    SBWindowSelfHostWrapper *_pipWindowWrapper;
    UIView *_viewToAnimate;
    NSMutableArray *_appsRequiringHostView;
    _Bool _finishedZooming;
    _Bool _finishedActivating;
    _Bool _finishedCrossfadingToHostView;
    _Bool _finishedNotificationAnimations;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBUILockScreenNotificationAnimationHandler *_notificationAnimationHandler;
}

- (id)_lockScreenViewController;
- (void)_maybeReportAnimationFinished;
- (void)_noteContextHostCrossfadeDidFinish;
- (void)_maybeStartCrossfade;
- (void)_noteNotificationAnimationsDidFinish;
- (void)_finishedZooming;
- (void)_applicationDependencyStateChanged;
- (_Bool)isReasonableMomentToInterrupt;
- (void)_cleanupAnimation;
- (void)_doAnimation:(id)arg1;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_willSetupStartDependencies;
- (id)_animationProgressDependencies;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)_setHidden:(_Bool)arg1;
- (_Bool)_shouldDismissBanner;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)_getTransitionWindow;

@end

