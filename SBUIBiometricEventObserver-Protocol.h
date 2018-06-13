
#import "NSObject.h"

@class SBUIBiometricEventMonitor;

@protocol SBUIBiometricEventObserver <NSObject>
- (void)biometricEventMonitor:(SBUIBiometricEventMonitor *)arg1 handleBiometricEvent:(unsigned long long)arg2;
@end

