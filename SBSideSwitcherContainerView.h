
#import "SBLayoutElementContainerView.h"

@class SBOrientationTransformWrapperView, UIView;

@interface SBSideSwitcherContainerView : SBLayoutElementContainerView
{
    SBOrientationTransformWrapperView *_backgroundWrapperView;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView;
- (struct CGRect)contentRectForLayout;
- (void)layoutSubviews;
- (void)setOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

