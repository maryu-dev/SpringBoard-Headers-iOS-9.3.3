
#import "SBMainWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class FBDisplayLayoutTransition, NSArray, NSString, SBUIAnimationController, SBWorkspaceAlert;

@interface SBAppsToAlertWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    NSArray *_topApplications;
    SBWorkspaceAlert *_activatingAlert;
    SBUIAnimationController *_animation;
    id _alertActivationBlock;
    _Bool _animatedAppDeactivation;
    FBDisplayLayoutTransition *_layoutTransition;
    _Bool _deferAlertActivationForAnimationCompletion;
}

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_updateSceneLayout;
- (_Bool)_isFromMainSwitcher;
- (void)_activateAlert;
- (void)_didComplete;
- (void)_begin;
- (void)_willBegin;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

