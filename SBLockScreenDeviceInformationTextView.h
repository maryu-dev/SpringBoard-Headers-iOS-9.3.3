
#import "UIView.h"

#import "SBUILegibility.h"

@class NSArray, NSString, SBUILegibilityLabel, _UILegibilitySettings;

@interface SBLockScreenDeviceInformationTextView : UIView <SBUILegibility>
{
    _UILegibilitySettings *_legibilitySettings;
    double _strength;
    UIView *_containerView;
    NSString *_supervisionText;
    SBUILegibilityLabel *_supervisionLabel;
    NSArray *_deviceInformationText;
    SBUILegibilityLabel *_deviceInformationLabel;
}

- (void)_updateDeviceInformationLabel;
- (void)_updateSupervisionLabel;
- (id)_labelFont;
- (void)layoutSubviews;
- (void)updateForChangedSettings:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

