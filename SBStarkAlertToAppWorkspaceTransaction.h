
#import "SBStarkToAppWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class NSString, SBAlert, SBUIAnimationController;

@interface SBStarkAlertToAppWorkspaceTransaction : SBStarkToAppWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBAlert *_alert;
    SBUIAnimationController *_animation;
    _Bool _animatedAppActivation;
    _Bool _animatingAlertSuspension;
    _Bool _deactivateAfterNextLaunch;
    _Bool _fromAssistant;
    _Bool _waitingForAppActivation;
}

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)mainScreenApplicationSceneDidCommit:(id)arg1;
- (void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1;
- (void)_alertDidDeactivate;
- (void)_handleFailure;
- (void)_deactivateAlertIfNecessary;
- (void)_alertAnimationComplete:(id)arg1;
- (void)_didComplete;
- (void)_cleanUpAnimation;
- (_Bool)_hasAnimation;
- (void)_beginAnimation;
- (void)_begin;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

