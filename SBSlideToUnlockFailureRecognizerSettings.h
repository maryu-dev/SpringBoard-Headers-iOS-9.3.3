
#import "_UISettings.h"

@interface SBSlideToUnlockFailureRecognizerSettings : _UISettings
{
    _Bool _enabled;
    _Bool _viewDebugArea;
    unsigned long long _maxAllowableVerticalOffset;
    double _topAngle;
    double _bottomAngle;
}

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

