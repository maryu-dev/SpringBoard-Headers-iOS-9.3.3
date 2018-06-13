
#import "UIView.h"

@class SBLayoutElementAdornmentView, SBOrientationTransformWrapperView, UIGestureRecognizer, UISwipeGestureRecognizer;

@interface SBLayoutElementContainerView : UIView
{
    SBLayoutElementAdornmentView *_adornmentView;
    UIView *_contentView;
    SBOrientationTransformWrapperView *_contentWrapperView;
    UIGestureRecognizer *_dismissTapRecognizer;
    UISwipeGestureRecognizer *_dismissSwipeRecognizer;
    id <SBLayoutElementContainerViewDelegate> _delegate;
    _Bool _transitioning;
    long long _orientation;
    _Bool _keyboardVisible;
    struct CGRect _keyboardFrame;
    _Bool _resizing;
    double _pinResizeGrabberHorizontalOffset;
}

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateVibrancyForPinResizeGrabberView;
- (void)_keyboardFrameWillChange:(id)arg1;
- (void)_handleDimmingViewGesture:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_contentWrapperView;
@property(retain, nonatomic) UIView *contentView;
@property(nonatomic) long long orientation;
- (unsigned long long)_supportedOrientations;
- (void)setLayoutElementViewAlpha:(double)arg1;
- (struct CGRect)pinResizeGrabberFrame;
- (void)setWantsPinResizeGrabber:(_Bool)arg1 withPercent:(double)arg2;
@property(nonatomic) _Bool wantsPinResizeGrabber;
- (void)didEndResize;
- (void)willBeginResize;
- (_Bool)_isTransitioning;
- (void)didEndTransition;
- (void)willBeginTransition;
- (void)prepareForReuse;
@property(nonatomic, getter=isSideSwitcherGrabberPressed) _Bool sideSwitcherGrabberPressed;
@property(nonatomic) long long sideSwitcherGrabberStyle;
- (void)setDimmingLevel:(long long)arg1 withPercent:(double)arg2;
@property(nonatomic) long long dimmingLevel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

