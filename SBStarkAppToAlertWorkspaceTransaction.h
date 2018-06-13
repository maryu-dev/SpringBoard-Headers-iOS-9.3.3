
#import "SBStarkWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class NSString, SBUIAnimationController, SBWorkspaceAlert, SBWorkspaceApplication;

@interface SBStarkAppToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBWorkspaceAlert *_activatingAlert;
    SBWorkspaceApplication *_topApplication;
    SBUIAnimationController *_animation;
    _Bool _animatedAppDeactivation;
    _Bool _fromStarkLauncher;
}

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_didComplete;
- (void)_begin;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

