
#import "SBIconZoomSettings.h"

@interface SBCenterZoomSettings : SBIconZoomSettings
{
    double _centerRowCoordinate;
    long long _distanceEffect;
    double _firstHopIncrement;
    double _hopIncrementAcceleration;
    double _dockMass;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

