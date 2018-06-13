
#import "SBAlertView.h"

@class NSMutableSet, SBLockScreenBatteryChargingView, SBLockScreenDeviceInformationTextView, SBLoginAppContainerOverlayWrapperView, UIView, _UILegibilitySettings;

@interface SBLoginAppContainerView : SBAlertView
{
    NSMutableSet *_contentHiddenRequesters;
    UIView *_contentView;
    SBLockScreenBatteryChargingView *_batteryChargingView;
    SBLoginAppContainerOverlayWrapperView *_thermalWarningView;
    SBLockScreenDeviceInformationTextView *_deviceInformationTextView;
    UIView *_pluginView;
    _UILegibilitySettings *_legibilitySettings;
}

- (void)_showOrHidePluginViewAppropriately;
- (void)setContentHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

