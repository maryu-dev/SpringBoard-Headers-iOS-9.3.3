
#import "SBAlertView.h"

#import "SBPowerDownViewInterface.h"
#import "_UIActionSliderDelegate.h"

@class NSString, NSTimer, SBAppStatusBarSettingsAssertion, SBShapeView, UIButton, UILabel, UIView, _UIActionSlider;

@interface SBPowerDownView : SBAlertView <_UIActionSliderDelegate, SBPowerDownViewInterface>
{
    NSTimer *_autoDismissTimer;
    UIView *_backdropView;
    SBShapeView *_darkeningUnderlayView;
    UIView *_darkeningOverlayView;
    _UIActionSlider *_actionSlider;
    UIButton *_cancelButton;
    UILabel *_cancelLabel;
    _Bool _hiddenLockScreenForeground;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    _Bool _canAlterScreenBrightness;
    id <SBPowerDownViewDelegate> _delegate;
}

- (void)_animatePowerDown;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (void)_updateSliderExclusionPath;
- (void)_resetScreenBrightness;
- (void)_saveScreenBrightnessInformation;
- (void)_resetAutoDismissTimer;
- (void)_cancelAutoDismissTimer;
- (id)_lockScreenView;
- (void)actionSliderDidCancelSlide:(id)arg1;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidBeginSlide:(id)arg1;
- (void)dismiss;
- (void)layoutForInterfaceOrientation:(long long)arg1;
- (void)animateOut;
- (void)animateIn;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

