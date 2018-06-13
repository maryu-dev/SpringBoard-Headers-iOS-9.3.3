
#import "UIView.h"

@class SBChevronView, SBLayoutElementPinResizeGrabberView, SBSceneDimmingView;

@interface SBLayoutElementAdornmentView : UIView
{
    SBSceneDimmingView *_dimmingView;
    long long _dimmingLevel;
    long long _sideSwitcherGrabberStyle;
    SBChevronView *_sideSwitcherGrabberView;
    SBLayoutElementPinResizeGrabberView *_pinResizeGrabberView;
    double _pinResizeGrabberHorizontalOffset;
    double _pinResizeGrabberVerticalOffset;
    _Bool _sideSwitcherGrabberPressed;
}

+ (id)sideSwitcherGrabberView;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)_updateGrabberColorAndVisibility;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGRect)_pinResizeGrabberHitTestFrame;
@property(readonly, nonatomic) struct CGRect pinResizeGrabberFrame;
- (void)setWantsPinResizeGrabber:(_Bool)arg1 withPercent:(double)arg2;
@property(nonatomic) _Bool wantsPinResizeGrabber;
- (void)setDimmingLevel:(long long)arg1 withPercent:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

