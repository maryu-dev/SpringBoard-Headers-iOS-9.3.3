
#import "_UISettings.h"

@class SBAnimationSettings, SBBounceSettings, SBLockScreenPasscodeSettings, SBSlideToUnlockFailureRecognizerSettings;

@interface SBLockScreenSettings : _UISettings
{
    _Bool _alwaysPutPluginsBelowScrollView;
    _Bool _killsInsecureDrawingApps;
    SBBounceSettings *_verticalBounceSettings;
    SBBounceSettings *_horizontalBounceSettings;
    SBLockScreenPasscodeSettings *_passcodeSettings;
    SBSlideToUnlockFailureRecognizerSettings *_slideToUnlockFailureRecognizerSettings;
    SBAnimationSettings *_unlockToPhoneWallpaperOutSettings;
    SBAnimationSettings *_unlockToPhoneWallpaperInSettings;
    SBAnimationSettings *_unlockWallpaperOutSettings;
    SBAnimationSettings *_unlockWallpaperInSettings;
    double _lockToUnlockSlideCompletionPercentage;
    double _lockToUnlockSlideCompletionPercentageIPad;
    double _unlockSlideForIdleTimerDisabledPercentage;
    double _unlockSlideForIdleTimerDisabledPercentageIPad;
    double _notificationScrollForIdleTimerDisabledOffset;
    double _notificationScrollForIdleTimerDisabledOffsetIPad;
    double _appGrabberSlideUpVelocityThreshold;
    double _unlockSwipeWallpaperAlpha;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

