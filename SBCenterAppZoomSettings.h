
#import "SBCenterZoomSettings.h"

@class SBAnimationSettings;

@interface SBCenterAppZoomSettings : SBCenterZoomSettings
{
    double _appHeadStart;
    SBAnimationSettings *_appZoomSettings;
    SBAnimationSettings *_appFadeSettings;
}

+ (id)settingsControllerModule;

@end

