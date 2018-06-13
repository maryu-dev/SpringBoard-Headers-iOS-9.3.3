
#import "UIView.h"

#import "_SBFVibrantView.h"

@class NSString, SBSaturatedIconView, SBUILegibilityView, UIImage, _SBFVibrantSettings;

@interface SBSlideUpAppGrabberView : UIView <_SBFVibrantView>
{
    struct UIEdgeInsets _hitTestEdgeInsets;
    UIView *_tintView;
    UIView *_backgroundView;
    SBUILegibilityView *_legibilityView;
    SBSaturatedIconView *_saturatedIconView;
    UIImage *_grabberImage;
    _Bool _vibrancyAllowed;
    _SBFVibrantSettings *_vibrantSettings;
    id <SBResponderTouchDelegate> _delegate;
}

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateForChangedSettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (id)_lazyLegibilityView;
- (void)setBackgroundView:(id)arg1;
- (_Bool)_shouldUseVibrancy;
- (void)setAppStyleGrabberImage:(id)arg1;
- (void)setGrabberImageFromApp:(id)arg1 withIconFormat:(int)arg2;
- (void)setGrabberImageFromApp:(id)arg1;
- (void)setGrabberImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithAdditionalTopPadding:(_Bool)arg1 invertVerticalInsets:(_Bool)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

