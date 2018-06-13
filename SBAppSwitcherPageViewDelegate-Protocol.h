
#import "NSObject.h"

@class SBAppSwitcherPageView;

@protocol SBAppSwitcherPageViewDelegate <NSObject>
- (struct CGAffineTransform)contentViewTransformForPageView:(SBAppSwitcherPageView *)arg1;
- (long long)resizingPolicyForPageView:(SBAppSwitcherPageView *)arg1;

@optional
- (struct CGSize)contentViewSizeForPageView:(SBAppSwitcherPageView *)arg1;
@end

