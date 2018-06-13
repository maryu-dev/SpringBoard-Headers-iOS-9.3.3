
#import "_UISettings.h"

@class SBCenterAppLaunchSettings, SBCenterAppSuspendSettings, SBCrossfadeAppLaunchSettings, SBCrossfadeAppSuspendSettings, SBFolderCloseSettings, SBFolderOpenSettings, SBReducedMotionFadeSettings, SBUnlockSettings;

@interface SBRootAnimationSettings : _UISettings
{
    SBReducedMotionFadeSettings *_reducedMotionSettings;
    SBUnlockSettings *_unlockSettings;
    SBCenterAppLaunchSettings *_centerLaunchSettings;
    SBCenterAppSuspendSettings *_centerSuspendSettings;
    SBCrossfadeAppLaunchSettings *_crossfadeLaunchSettings;
    SBCrossfadeAppSuspendSettings *_crossfadeSuspendSettings;
    SBFolderOpenSettings *_folderOpenSettings;
    SBFolderCloseSettings *_folderCloseSettings;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

