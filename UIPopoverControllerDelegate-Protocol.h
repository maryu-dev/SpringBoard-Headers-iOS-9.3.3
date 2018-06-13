
#import "NSObject.h"

@class UIPopoverController;

@protocol UIPopoverControllerDelegate <NSObject>

@optional
- (void)popoverController:(UIPopoverController *)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg1;
- (_Bool)popoverControllerShouldDismissPopover:(UIPopoverController *)arg1;
@end

