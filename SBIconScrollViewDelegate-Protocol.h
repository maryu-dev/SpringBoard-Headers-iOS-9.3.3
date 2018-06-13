
#import "UIScrollViewDelegate.h"

@class SBIconScrollView;

@protocol SBIconScrollViewDelegate <UIScrollViewDelegate>
- (void)iconScrollView:(SBIconScrollView *)arg1 willSetContentOffset:(inout struct CGPoint *)arg2;
- (void)iconScrollViewDidCancelTouchTracking:(SBIconScrollView *)arg1;
- (void)iconScrollViewWillCancelTouchTracking:(SBIconScrollView *)arg1;
@end

