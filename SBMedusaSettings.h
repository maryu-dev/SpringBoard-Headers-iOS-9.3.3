
#import "_UISettings.h"

@class NSString;

@interface SBMedusaSettings : _UISettings
{
    _Bool _enableSideApps;
    _Bool _enableBreadcrumbs;
    _Bool _enablePinningSideApps;
    _Bool _debugSceneColors;
    _Bool _debugRotationCenter;
    _Bool _debugColorRotationRegions;
    _Bool _clipRotationRegions;
    _Bool _fencesRotation;
    NSString *_desiredBundleIdentifier;
    double _zoomOutRotationFactor;
    double _rotationSlowdownFactor;
    double _spaceAroundSideGrabberToAllowPullIn;
    unsigned long long _millisecondsBetweenResizeSteps;
    double _slideOffResizeThreshold;
    double _gapSwipeBuffer;
}

+ (id)settingsControllerModule;
- (_Bool)anyRotationDebuggingEnabled;
- (void)setDefaultValues;

@end

