
#import "SBUIStarkScreenAnimationController.h"

@class SBAlert, SBApplication, SBDosidoAnimator, UIView;

@interface SBUIStarkDosidoAnimation : SBUIStarkScreenAnimationController
{
    UIView *_fromView;
    UIView *_toView;
    UIView *_viewToHide;
    SBAlert *_alertImpersonator;
    SBApplication *_impersonatedApplication;
    SBDosidoAnimator *_dosidoAnimator;
    _Bool _animationFinished;
    _Bool _fromAssistant;
}

- (void)noteDependencyDidInvalidate;
- (void)_maybeReportAnimationFinished;
- (void)_applicationDependencyStateChanged;
- (void)_cleanupHosting;
- (id)_animationFactory;
- (double)_animationDelay;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_willSetupStartDependencies;
- (id)_animationProgressDependencies;
- (_Bool)_waitsForApplicationActivationIfNecessary;
- (void)dealloc;
- (id)initFromAlertImpersonator:(id)arg1 toApp:(id)arg2 starkScreenController:(id)arg3;
- (id)initFromApp:(id)arg1 toAlertImpersonator:(id)arg2 starkScreenController:(id)arg3;
- (id)initFromApp:(id)arg1 toApp:(id)arg2 starkScreenController:(id)arg3;
- (void)_commonInitFromView:(id)arg1 toView:(id)arg2 alert:(id)arg3 toDisplay:(id)arg4;

@end

