
#import "UIViewController.h"

@class NSMutableSet, SBAlert, UIScreen, UIView;

@interface SBAlertWindowViewController : UIViewController
{
    UIScreen *_screen;
    id <SBAlertWindowViewControllerDelegate> _alertWindowViewControllerDelegate;
    UIView *_contentView;
    SBAlert *_activeAlert;
    UIViewController *_activeViewController;
    NSMutableSet *_childAlerts;
}

- (void)window:(id)arg1 willAnimateFromContentFrame:(struct CGRect)arg2 toContentFrame:(struct CGRect)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)wantsFullScreenLayout;
- (void)noteAlertWindow:(id)arg1 didDisplayAlert:(id)arg2;
- (_Bool)alertWindow:(id)arg1 canAnimateInAlert:(id)arg2;
- (id)stackedViewForAlert:(id)arg1;
- (id)stackedAlertsIncludingActiveAlert:(_Bool)arg1;
- (long long)stackedAlertCount;
- (void)addView:(id)arg1 toBeObscuredByAlert:(id)arg2;
- (void)removeAlertController:(id)arg1;
- (void)performEndAppearanceToController:(id)arg1 withTransitionBlock:(id)arg2;
- (void)addAlertController:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithScreen:(id)arg1;

@end

