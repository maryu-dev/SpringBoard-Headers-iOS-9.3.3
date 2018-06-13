
#import "SBIconAnimationSettings.h"

@interface SBIconZoomSettings : SBIconAnimationSettings
{
    _Bool _labelAlphaWithZoom;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

