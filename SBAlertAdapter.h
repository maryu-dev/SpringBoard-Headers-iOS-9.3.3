
#import "SBAlert.h"

@class UIViewController;

@interface SBAlertAdapter : SBAlert
{
    UIViewController *_effectiveViewController;
}

- (id)effectiveViewController;
- (void)setDisplay:(id)arg1;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (id)display;
- (void)alertWindow:(id)arg1 resizedFromContentFrame:(struct CGRect)arg2 toContentFrame:(struct CGRect)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)setView:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end

