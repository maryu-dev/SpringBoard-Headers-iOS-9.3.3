
#import "UIViewController.h"

@class SBBulletinRootView, SBBulletinWindowController, _SBBulletinRootViewControllerTransitionContext;

@interface SBBulletinRootViewController : UIViewController
{
    SBBulletinRootView *_rootView;
    SBBulletinWindowController *_windowController;
    _SBBulletinRootViewControllerTransitionContext *_activeTransitionContext;
}

- (void)_getRotationContentSettings:(id *)arg1;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)wantsFullScreenLayout;
- (void)loadView;
- (id)initWithBulletinWindowController:(id)arg1;

@end

