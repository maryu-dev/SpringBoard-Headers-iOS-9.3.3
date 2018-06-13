
#import "NSObject.h"

@interface SBPassKitPrearmTrigger : NSObject
{
    id <SBPassKitPrearmTriggerDelegate> _delegate;
    double _baseFingerDownTimeout;
    double _baseMenuPressTimeout;
    double _fingerDownTimeout;
    double _menuPressTimeout;
    unsigned long long _homePressCount;
    unsigned long long _homePressTotalCount;
    unsigned long long _homePressTotalCountWhenFired;
    unsigned long long _homePressCountWhenHomeUp;
    _Bool _fingerOnTimerActive;
    _Bool _doubleTapTimerActive;
}

- (double)_accessibilityModifyTimeoutForHomeClickSpeed:(double)arg1;
- (void)accessibilityHomeClickTimeoutsChanged;
- (void)accessibilityCancelFingerOnTimer;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)fingerOn;
- (_Bool)isTrackingUserInput;
- (void)_reset;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 fingerDownTimeout:(double)arg2 menuPressTimeout:(double)arg3;

@end

