
#import "SBStarkAppToAppWorkspaceTransaction.h"

@class SBWorkspaceAlert, SBWorkspaceApplication;

@interface SBStarkAppToImpersonatedAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction
{
    SBWorkspaceAlert *_activatingAlert;
    _Bool _animatedAppDeactivation;
    SBWorkspaceApplication *_mainScreenAppThatWillBeActivated;
    id _mainScreenAppThatWillBeActivatedObserver;
}

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (id)_newAnimationFromNowPlayingToApp;
- (id)_newAnimationFromAppToNowPlaying;
- (id)_newAnimationFromLauncherToApp;
- (id)_newAnimationFromAppToApp;
- (void)_finishCommit;
- (void)_doCommit;
- (id)_effectiveTopEntity;
- (void)_noteWillActivateApplicationOnMainScreen:(id)arg1 underLock:(_Bool)arg2;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@end

