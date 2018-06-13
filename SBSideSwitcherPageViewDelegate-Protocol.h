
#import "SBAppSwitcherPageViewDelegate.h"

@class SBAppSwitcherPageView, SBIconViewMap;

@protocol SBSideSwitcherPageViewDelegate <SBAppSwitcherPageViewDelegate>
- (void)selectedPageView:(SBAppSwitcherPageView *)arg1;
- (_Bool)canSelectPageView:(SBAppSwitcherPageView *)arg1 numberOfTaps:(long long)arg2;
- (struct CGAffineTransform)overlayViewTransformForPageView:(SBAppSwitcherPageView *)arg1;
- (SBIconViewMap *)iconViewMapForSwitcherPageView:(SBAppSwitcherPageView *)arg1;
@end

