
#import "UIScrollView.h"

@interface SBAppSwitcherScrollView : UIScrollView
{
    struct CGPoint _previousContentOffset;
    double _previousScrollTime;
    struct CGPoint _rawContentOffsetVelocity;
}

- (struct CGPoint)contentOffsetVelocityConsideringNextContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)contentOffsetVelocity;
- (void)setContentOffset:(struct CGPoint)arg1;

@end

