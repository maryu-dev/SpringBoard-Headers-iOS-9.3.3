
#import "_UISettings.h"

@class SBControlCenterSettingsSectionSettings, SBControlCenterShortcutSectionSettings, UIColor;

@interface SBControlCenterSettings : _UISettings
{
    _Bool _highlightUsesPlusL;
    _Bool _forceVibrantControls;
    _Bool _useNewBounce;
    SBControlCenterSettingsSectionSettings *_settingsSectionSettings;
    SBControlCenterShortcutSectionSettings *_shortcutSectionSettings;
    double _controlAlpha;
    double _controlAlpha1x;
    double _minControlAlpha;
    double _maxControlAlpha;
    double _disabledAlpha;
    double _disabledAlpha1x;
    double _highlightAlpha;
    double _glowAlpha;
    UIColor *_highlightColor;
    double _oldBounceFriction;
    double _bounceDensityFactor;
    double _bounceResistance;
    double _minVelocity;
    double _maxVelocity;
    double _attachmentThreshold;
    double _attachmentFrequencyAbove;
    double _attachmentFrequencyBelow;
    double _attachmentVelocityDamping;
    double _attachmentMinDamping;
    double _attachmentMaxDamping;
    double _backgroundAlphaFactor;
}

+ (id)settingsControllerModule;
- (double)resolvedDisabledAlpha;
- (double)resolvedControlAlpha;
- (void)setDefaultValues;

@end

