
#import "NSObject.h"

@class SBDisplayItem, SBSideSwitcherPageView, SBSideSwitcherScrollingItemViewController;

@protocol SBSideSwitcherScrollingItemViewDelegate <NSObject>
- (_Bool)sideSwitcherScroller:(SBSideSwitcherScrollingItemViewController *)arg1 displayItemWantsToBeKeptInViewHierarchy:(SBDisplayItem *)arg2;
- (double)sideSwitcherScrollerDistanceBetweenItems:(SBSideSwitcherScrollingItemViewController *)arg1;
- (struct CGSize)sideSwitcherScrollerItemSize:(SBSideSwitcherScrollingItemViewController *)arg1;
- (void)sideSwitcherScroller:(SBSideSwitcherScrollingItemViewController *)arg1 purgeView:(SBSideSwitcherPageView *)arg2;
- (SBSideSwitcherPageView *)sideSwitcherScroller:(SBSideSwitcherScrollingItemViewController *)arg1 viewForDisplayItem:(SBDisplayItem *)arg2;
@end

