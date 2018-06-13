
#import "_UISettings.h"

@interface SBLegibilitySettings : _UISettings
{
    double _slideToUnlockDarkShadowStrength;
    double _slideToUnlockLightShadowStrength;
    double _cameraGrabberDarkShadowStrength;
    double _cameraGrabberLightShadowStrength;
    double _timeDarkShadowStrength;
    double _timeLightShadowStrength;
    double _dateDarkShadowStrength;
    double _dateLightShadowStrength;
    double _statusTextDarkShadowStrength;
    double _statusTextLightShadowStrength;
    double _iconLabelDarkShadowStrength;
    double _iconLabelLightShadowStrength;
    double _folderTitleDarkShadowStrength;
    double _folderTitleLightShadowStrength;
    double _timerTextDarkShadowStrength;
    double _timerTextLightShadowStrength;
    double _timerDialDarkShadowStrength;
    double _timerDialLightShadowStrength;
    double _logoutButtonGlyphDarkShadowStrength;
    double _logoutButtonGlyphLightShadowStrength;
    double _logoutButtonTextDarkShadowStrength;
    double _logoutButtonTextLightShadowStrength;
    double _deviceInformationTextDarkShadowStrength;
    double _deviceInformationTextLightShadowStrength;
    double _userPictureDarkShadowStrength;
    double _userPictureLightShadowStrength;
}

+ (id)settingsControllerModule;
- (double)userPictureStrengthForStyle:(long long)arg1;
- (double)deviceInformationTextStrengthForStyle:(long long)arg1;
- (double)logoutButtonTextStrengthForStyle:(long long)arg1;
- (double)logoutButtonGlyphStrengthForStyle:(long long)arg1;
- (double)timerDialStrengthForStyle:(long long)arg1;
- (double)timerTextStrengthForStyle:(long long)arg1;
- (double)folderTitleStrengthForStyle:(long long)arg1;
- (double)iconLabelStrengthForStyle:(long long)arg1;
- (double)statusTextStrengthForStyle:(long long)arg1;
- (double)dateStrengthForStyle:(long long)arg1;
- (double)timeStrengthForStyle:(long long)arg1;
- (double)cameraGrabberStrengthForStyle:(long long)arg1;
- (double)slideToUnlockStrengthForStyle:(long long)arg1;
- (void)setDefaultValues;

@end

