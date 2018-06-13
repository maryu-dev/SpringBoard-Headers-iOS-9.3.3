
#import "UIViewController.h"

@interface SBLockOverlayViewController : UIViewController
{
    id <SBLockOverlayViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool shouldBeHidden;
- (id)overlayView;

@end

