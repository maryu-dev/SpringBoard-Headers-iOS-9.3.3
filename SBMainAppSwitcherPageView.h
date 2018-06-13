
#import "SBAppSwitcherPageView.h"

@class UIView<SBMainAppSwitcherPageContentView>;

@interface SBMainAppSwitcherPageView : SBAppSwitcherPageView
{
    long long _orientation;
}

+ (double)_horizontalEdgeBorderForOrientation:(long long)arg1;
+ (struct CGSize)sizeForOrientation:(long long)arg1;
- (struct CGRect)_viewFrame;
- (struct CGPoint)_centerForSubviewLayout;
- (struct CGAffineTransform)_overlayRotationTransform;
- (struct CGAffineTransform)_scaleTransform;
- (void)setView:(id)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)description;


@end

