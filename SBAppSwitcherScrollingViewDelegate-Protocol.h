
#import "NSObject.h"

@class SBAppSwitcherPageViewController, SBDisplayItem, SBMainAppSwitcherPageView;

@protocol SBAppSwitcherScrollingViewDelegate <NSObject>
- (double)reachabilityOffsetForSwitcherScroller:(SBAppSwitcherPageViewController *)arg1;
- (void)switcherScrollerBeganMoving:(SBAppSwitcherPageViewController *)arg1;
- (void)switcherScrollerDidEndScrolling:(SBAppSwitcherPageViewController *)arg1;
- (_Bool)switcherScroller:(SBAppSwitcherPageViewController *)arg1 displayItemWantsToBeKeptInViewHierarchy:(SBDisplayItem *)arg2;
- (void)switcherScroller:(SBAppSwitcherPageViewController *)arg1 displayItemWantsToBeRemoved:(SBDisplayItem *)arg2;
- (void)switcherScrollerBeganPanning:(SBAppSwitcherPageViewController *)arg1;
- (void)switcherScroller:(SBAppSwitcherPageViewController *)arg1 itemTapped:(SBDisplayItem *)arg2;
- (void)switcherScroller:(SBAppSwitcherPageViewController *)arg1 contentOffsetChanged:(double)arg2;
- (double)switcherScrollerDistanceBetweenItemCenters:(SBAppSwitcherPageViewController *)arg1 forOrientation:(long long)arg2;
- (struct CGSize)switcherScrollerItemSize:(SBAppSwitcherPageViewController *)arg1 forOrientation:(long long)arg2;
- (_Bool)switcherScrollerIsRelayoutBlocked:(SBAppSwitcherPageViewController *)arg1;
- (_Bool)switcherScroller:(SBAppSwitcherPageViewController *)arg1 isDisplayItemRemovable:(SBDisplayItem *)arg2;
- (SBMainAppSwitcherPageView *)switcherScroller:(SBAppSwitcherPageViewController *)arg1 viewForDisplayItem:(SBDisplayItem *)arg2;
@end

