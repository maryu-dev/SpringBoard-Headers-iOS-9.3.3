
#import "SBScaleZoomSettings.h"

@class SBAnimationSettings;

@interface SBCrossfadeZoomSettings : SBScaleZoomSettings
{
    _Bool _morphWithZoom;
    SBAnimationSettings *_morphSettings;
}

+ (id)settingsControllerModule;
- (id)effectiveMorphAnimationSettings;
- (void)setDefaultValues;

@end

