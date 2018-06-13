
#import "NSObject.h"

@class SBAppStatusBarSettingsAssertion, SBDisableAppStatusBarAlphaChangesAssertion, SBFakeStatusBarView, SBLockScreenViewControllerBase, UIView;

@interface SBLockScreenClippedSlideController : NSObject
{
    SBLockScreenViewControllerBase *_lockscreenVC;
    UIView *_clippingView;
    UIView *_viewToClip;
    UIView *_statusBarContainer;
    _Bool _wantsFakeStatusBar;
    _Bool _shouldSlideLockScreenView;
    _Bool _cleanupManually;
    _Bool _needsCleanup;
    _Bool _hidesSpringBoardStatusBarInitially;
    SBFakeStatusBarView *_fakeStatusBar;
    SBDisableAppStatusBarAlphaChangesAssertion *_statusBarAssertion;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
}

- (void)_cleanup;
- (void)_setupAndAddFakeStatusBarIfNecessary;
- (void)cleanupIfNecessary;
- (void)performTransition:(int)arg1 duration:(double)arg2 delay:(double)arg3 completion:(id)arg4;
- (void)performTransition:(int)arg1 withAnimator:(id)arg2;
- (id)_completionForTransition:(int)arg1;
- (id)_stepperForTransition:(int)arg1;
- (void)dealloc;
- (id)initWithLockScreenViewController:(id)arg1;

@end

