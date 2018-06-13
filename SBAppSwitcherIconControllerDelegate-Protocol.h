
#import "NSObject.h"

@class SBAppSwitcherIconController, SBDisplayItem, SBWindow;

@protocol SBAppSwitcherIconControllerDelegate <NSObject>
- (SBWindow *)switcherIconScrollerWindowForViewRecycling:(SBAppSwitcherIconController *)arg1;
- (void)switcherIconScrollerDidEndScrolling:(SBAppSwitcherIconController *)arg1;
- (unsigned long long)switcherIconScroller:(SBAppSwitcherIconController *)arg1 settledIndexForNormalizedOffset:(inout double *)arg2 andXVelocity:(double)arg3;
- (void)switcherIconScrollerBeganPanning:(SBAppSwitcherIconController *)arg1;
- (_Bool)switcherIconScroller:(SBAppSwitcherIconController *)arg1 shouldHideIconForDisplayItem:(SBDisplayItem *)arg2;
- (void)switcherIconScroller:(SBAppSwitcherIconController *)arg1 activate:(SBDisplayItem *)arg2;
- (void)switcherIconScroller:(SBAppSwitcherIconController *)arg1 contentOffsetChanged:(double)arg2;
@end

