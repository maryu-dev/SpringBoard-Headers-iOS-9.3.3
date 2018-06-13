
#import "NSObject.h"

@class SBControlCenterViewController, UIGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, _UIBackdropView;

@protocol SBControlCenterViewControllerDelegate <NSObject>
- (void)controlCenterViewController:(SBControlCenterViewController *)arg1 backdropViewDidUpdate:(_UIBackdropView *)arg2;
- (void)controlCenterViewController:(SBControlCenterViewController *)arg1 handlePan:(UIPanGestureRecognizer *)arg2;
- (void)controlCenterViewController:(SBControlCenterViewController *)arg1 handleTap:(UITapGestureRecognizer *)arg2;
- (_Bool)controlCenterViewController:(SBControlCenterViewController *)arg1 canHandleGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)controlCenterViewControllerWantsDismissal:(SBControlCenterViewController *)arg1;
@end

