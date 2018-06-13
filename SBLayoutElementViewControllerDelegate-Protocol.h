
@class SBLayoutElementViewController, SBSDisplayLayoutElement;

@protocol SBLayoutElementViewControllerDelegate
- (void)layoutElementViewController:(SBLayoutElementViewController *)arg1 configureDisplayLayoutElement:(SBSDisplayLayoutElement *)arg2;
- (_Bool)shouldAllowSwipeInDimmingViewAtStartLocation:(struct CGPoint)arg1 forLayoutElementViewController:(SBLayoutElementViewController *)arg2;
- (void)handleDimmingViewTapForLayoutElementViewController:(SBLayoutElementViewController *)arg1;
@end

