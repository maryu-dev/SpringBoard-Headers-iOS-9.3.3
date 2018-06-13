
#import "_UISettings.h"

@interface SBReachabilitySettings : _UISettings
{
    _Bool _allowOnAllDevices;
    double _fingerOnMesaRequiredDuration;
    unsigned long long _numberOfTapsForTapTrigger;
    double _tapToTapMaxInterval;
    double _debounceFingerOff;
    double _debounceHomeButtonPress;
    double _reachabilityDefaultKeepAlive;
    double _reachabilityInteractiveKeepAlive;
    double _yOffsetFactor;
    double _mass;
    double _stiffness;
    double _damping;
    double _epsilon;
    double _reducedMotionSlideDuration;
}

+ (id)settingsControllerModule;
- (id)animationFactory;
- (void)setDefaultValues;

@end

