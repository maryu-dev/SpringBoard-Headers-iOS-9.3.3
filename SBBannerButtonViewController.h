
#import "UIViewController.h"

@class NSArray;

@interface SBBannerButtonViewController : UIViewController
{
    NSArray *_buttons;
    id <SBBannerButtonViewControllerDelegate> _delegate;
}

- (void)_buttonPressed:(id)arg1;
- (id)_buttonForActionTitle:(id)arg1;
- (id)_buttonView;
- (struct CGSize)preferredContentSize;
- (void)setButtonTitles:(id)arg1;
- (void)loadView;

@end

