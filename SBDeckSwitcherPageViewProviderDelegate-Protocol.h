
#import "NSObject.h"

@class SBDeckSwitcherPageViewProvider, SBDisplayItem, SBMainDisplayLayoutState, UIViewController;

@protocol SBDeckSwitcherPageViewProviderDelegate <NSObject>
- (UIViewController *)containerViewControllerForPageViewFromProvider:(SBDeckSwitcherPageViewProvider *)arg1;
- (struct CGSize)contentSizeForDisplayItem:(SBDisplayItem *)arg1 fromProvider:(SBDeckSwitcherPageViewProvider *)arg2;
- (struct CGSize)sizeForDisplayItem:(SBDisplayItem *)arg1 fromProvider:(SBDeckSwitcherPageViewProvider *)arg2;
- (SBMainDisplayLayoutState *)initialLayoutStateForPageViewFromProvider:(SBDeckSwitcherPageViewProvider *)arg1;
- (SBDisplayItem *)nextDisplayItemForInteractiveTransitionForPageViewFromProvider:(SBDeckSwitcherPageViewProvider *)arg1;
- (SBDisplayItem *)initialDisplayItemForPageViewFromProvider:(SBDeckSwitcherPageViewProvider *)arg1;
- (long long)orientationForPageViewFromProvider:(SBDeckSwitcherPageViewProvider *)arg1;
@end

