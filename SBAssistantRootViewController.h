
#import "UIViewController.h"

@class UIScreen, UIView, UIViewController<SBUIPluginViewControllerInterface>;

@interface SBAssistantRootViewController : UIViewController
{
    UIViewController<SBUIPluginViewControllerInterface> *_assistantViewController;
    UIView *_contentView;
    UIView *_clippingView;
    UIScreen *_screen;
}

- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)wantsFullScreenLayout;
- (void)loadView;
- (id)initWithScreen:(id)arg1;

@end

