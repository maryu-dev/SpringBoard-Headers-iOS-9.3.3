
#import "NSObject.h"

#import "SBUIBiometricEventObserver.h"

@class NSString;

@interface SBReachabilityTrigger : NSObject <SBUIBiometricEventObserver>
{
    _Bool _enabled;
    _Bool _debouncedHome;
    _Bool _debounced;
    unsigned long long _numberOfTaps;
    unsigned long long _currentNumberOfTaps;
    unsigned long long _expirationGenCount;
    unsigned long long _debounceGenCount;
    id <SBReachabilityTriggerDelegate> _delegate;
}

- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned long long)arg2;
- (void)_debounce;
- (void)_setExpirationTimer;
- (void)handleHomeButtonPress;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

