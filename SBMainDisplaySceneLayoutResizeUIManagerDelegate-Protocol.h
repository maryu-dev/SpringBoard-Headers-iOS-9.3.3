
#import "NSObject.h"

@class SBAppContainerViewController, SBAppResizingPlaceholderView, SBLayoutElementViewController, SBMainDisplaySceneLayoutResizeUIManager, UIView;

@protocol SBMainDisplaySceneLayoutResizeUIManagerDelegate <NSObject>
- (void)resizeUIManager:(SBMainDisplaySceneLayoutResizeUIManager *)arg1 willChangeDisplayModeOfAppController:(SBAppContainerViewController *)arg2 toDisplayMode:(long long)arg3;
- (void)resizeUIManager:(SBMainDisplaySceneLayoutResizeUIManager *)arg1 willChangeToState:(unsigned long long)arg2;
- (void)resizeUIManager:(SBMainDisplaySceneLayoutResizeUIManager *)arg1 didCreateResizingPlacholderView:(SBAppResizingPlaceholderView *)arg2 forLayoutElementViewController:(SBLayoutElementViewController *)arg3;
- (SBAppResizingPlaceholderView *)resizeUIManager:(SBMainDisplaySceneLayoutResizeUIManager *)arg1 cachedResizingPlaceholderViewForLayoutElementViewController:(SBLayoutElementViewController *)arg2;
- (void)resizeUIManager:(SBMainDisplaySceneLayoutResizeUIManager *)arg1 didCreateSceneSnapshotView:(UIView *)arg2 forLayoutElementViewController:(SBLayoutElementViewController *)arg3;
- (UIView *)resizeUIManager:(SBMainDisplaySceneLayoutResizeUIManager *)arg1 cachedSceneSnapshotViewForLayoutElementViewController:(SBLayoutElementViewController *)arg2;
@end

