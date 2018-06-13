
#import "SBAlertWindowViewController.h"

@interface SBMainScreenAlertWindowViewController : SBAlertWindowViewController
{
}

- (void)_getRotationContentSettings:(id *)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)noteAlertWindow:(id)arg1 didDisplayAlert:(id)arg2;
- (_Bool)alertWindow:(id)arg1 canAnimateInAlert:(id)arg2;
- (void)performEndAppearanceToController:(id)arg1 withTransitionBlock:(id)arg2;

@end

