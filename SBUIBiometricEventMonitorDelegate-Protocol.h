
#import "NSObject.h"

@class SBUIBiometricEventMonitor;

@protocol SBUIBiometricEventMonitorDelegate <NSObject>
- (_Bool)biometricEventMonitorShouldRelockAfterBioUnlock:(SBUIBiometricEventMonitor *)arg1;
@end

