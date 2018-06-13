
#import "_UISettings.h"

@interface SBSnakebiteGestureSettings : _UISettings
{
    _Bool _showDebugRegions;
    double _maxDistanceFromDivider;
    double _maxHorizontalTouchDistance;
    double _minHorizontalTouchDistance;
    double _maxVerticalTouchDistance;
    double _maxSingleTouchDistanceFromDivider;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

