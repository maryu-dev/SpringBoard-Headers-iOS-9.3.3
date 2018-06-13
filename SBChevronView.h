
#import "UIView.h"

#import "_SBFVibrantView.h"

@class NSString, UIColor, _SBFVibrantSettings;

@interface SBChevronView : UIView <_SBFVibrantView>
{
    UIView *_leftGrabberView;
    UIView *_rightGrabberView;
    double _animationDuration;
    long long _state;
    UIColor *_color;
    double _alphaComponent;
    _SBFVibrantSettings *_vibrantSettings;
    UIView *_tintView;
    UIView *_backgroundView;
    _Bool _unified;
    UIView *_alphaContainerView;
}

- (void)setBackgroundView:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)_setUnified:(_Bool)arg1;
- (_Bool)_setState:(long long)arg1;
- (void)layoutSubviews;
- (void)_layoutGrabberView:(id)arg1 forState:(long long)arg2;
- (struct CGRect)_frameForGrabberView:(id)arg1 forState:(long long)arg2 unified:(_Bool)arg3;
- (struct CGAffineTransform)_transformForGrabberView:(id)arg1 forState:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) double animationDuration;
- (id)initWithColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

