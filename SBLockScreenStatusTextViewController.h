
#import "UIViewController.h"

@class _UILegibilityLabel;

@interface SBLockScreenStatusTextViewController : UIViewController
{
    _UILegibilityLabel *_textLabel;
}

- (id)_legalString;
- (void)updateTextView;
- (void)didMoveToParentViewController:(id)arg1;
- (id)statusTextView;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

