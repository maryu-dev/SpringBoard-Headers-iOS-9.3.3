
#import "SBScaleZoomSettings.h"

@class SBAnimationSettings;

@interface SBFolderZoomSettings : SBScaleZoomSettings
{
    SBAnimationSettings *_innerFolderFadeSettings;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

