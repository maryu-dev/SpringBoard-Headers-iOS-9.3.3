
#import "SBActivateAppUnderLockScreenWorkspaceTransaction.h"

@class SBWorkspaceApplication;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction
{
    SBWorkspaceApplication *_fromApp;
    _Bool _workspaceAlreadyResumed;
    _Bool _animatedAppDeactivation;
}

- (void)_animationDidFinish;
- (void)_animationWillBegin:(_Bool)arg1;
- (id)_setupAnimation;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_didComplete;
- (void)_begin;
- (id)debugDescription;
- (id)initWithTransitionRequest:(id)arg1 toLockScreenController:(id)arg2;

@end

