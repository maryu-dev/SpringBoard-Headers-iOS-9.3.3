
#import "SBMainDisplayLayoutState.h"

@interface SBMainDisplayLayoutState (SBResizeConveniences)
- (id)transitionContextForResizingSideAppToWidth:(long long)arg1;
- (id)transitionContextForSettingSideAppPinned:(_Bool)arg1;
- (id)transitionContextForSuspendingPrimaryApp;
- (id)transitionContextForSuspendingSideApp;
@end

