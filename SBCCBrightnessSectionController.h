
#import "SBControlCenterSectionViewController.h"

#import "SBCCButtonControllerDelegate.h"

@class NSString, SBUIControlCenterSlider, UIView, UIVisualEffectView;

@interface SBCCBrightnessSectionController : SBControlCenterSectionViewController <SBCCButtonControllerDelegate>
{
    SBUIControlCenterSlider *_slider;
    UIVisualEffectView *_vibrantDarkenLayer;
    UIView *_tintingDarkenLayer;
    struct BKSDisplayBrightnessTransaction *_brightnessTransaction;
}

- (void)controlCenterWillBeginTransition;
- (void)buttonController:(id)arg1 publishStatusUpdate:(id)arg2;
- (void)_noteScreenBrightnessDidChange:(id)arg1;
- (void)_sliderDidEndTracking:(id)arg1;
- (void)_sliderDidBeginTracking:(id)arg1;
- (void)_sliderValueDidChange:(id)arg1;
- (void)_setBacklightLevel:(float)arg1;
- (float)_backlightLevel;
- (void)viewDidLayoutSubviews;
- (double)_yOffsetFromCenterForSlider;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_updateEffects;
- (_Bool)_shouldDarkenBackground;
- (void)noteSettingsDidUpdate:(id)arg1;
- (struct CGSize)contentSizeForOrientation:(long long)arg1;
- (id)sectionIdentifier;
- (void)dealloc;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

