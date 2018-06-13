
#import "_UISettings.h"

@class NSString, SBAlertItemsSettings, SBAnimationFactorySettings, SBAppParallaxSettings, SBAppSwitcherSettings, SBCarDisplaySettings, SBCommandTabSettings, SBControlCenterSettings, SBFWallpaperSettings, SBFadeAnimationSettings, SBFolderSettings, SBHarmonySettings, SBHomeButtonSettings, SBIconColorSettings, SBIrisWallpaperSettings, SBLegibilitySettings, SBLockScreenSettings, SBLockScreenSlideUpAppSettings, SBLockScreenTestPluginSettings, SBMedusaSettings, SBNotificationCenterSettings, SBReachabilitySettings, SBRootAnimationSettings, SBSnakebiteGestureSettings, SBSoftwareUpdateSettings, SBSpotlightSettings, SBStatusBarStyleOverridesSettings;

@interface SBRootSettings : _UISettings
{
    _Bool _preventLockover;
    SBAppParallaxSettings *_parallaxSettings;
    SBFolderSettings *_folderSettings;
    SBRootAnimationSettings *_rootAnimationSettings;
    SBControlCenterSettings *_controlCenterSettings;
    SBAppSwitcherSettings *_appSwitcherSettings;
    SBLockScreenSettings *_lockScreenSettings;
    SBCarDisplaySettings *_carDisplaySettings;
    SBLockScreenTestPluginSettings *_lockScreenTestPluginSettings;
    SBIconColorSettings *_iconColorSettings;
    SBFadeAnimationSettings *_fadeAnimationSettings;
    SBAlertItemsSettings *_alertItemsSettings;
    SBNotificationCenterSettings *_notificationCenterSettings;
    SBLegibilitySettings *_legibilitySettings;
    SBFWallpaperSettings *_wallpaperSettings;
    SBIrisWallpaperSettings *_irisWallpaperSettings;
    SBAnimationFactorySettings *_animationSettings;
    SBHomeButtonSettings *_homeButtonSettings;
    SBLockScreenSlideUpAppSettings *_lockScreenSlideUpAppSettings;
    SBReachabilitySettings *_reachabilitySettings;
    SBMedusaSettings *_medusaSettings;
    SBSnakebiteGestureSettings *_snakebiteGestureSettings;
    SBStatusBarStyleOverridesSettings *_statusBarStyleOverridesSettings;
    SBCommandTabSettings *_commandTabSettings;
    SBSpotlightSettings *_spotlightSettings;
    SBSoftwareUpdateSettings *_softwareUpdateSettings;
    SBHarmonySettings *_harmonySettings;
    NSString *_testRecipeClassName;
    double _settingsAlpha;
}

+ (id)settingsControllerModule;
- (_Bool)_hasPreviousSettings;
- (void)setDefaultValues;

@end

