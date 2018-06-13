
#import "SBIconZoomSettings.h"

@class SBAnimationSettings;

@interface SBScaleZoomSettings : SBIconZoomSettings
{
    _Bool _crossfadeWithZoom;
    SBAnimationSettings *_outerFolderFadeSettings;
    SBAnimationSettings *_crossfadeSettings;
}

+ (id)settingsControllerModule;
- (id)effectiveCrossfadeAnimationSettings;
- (void)setDefaultValues;

@end

