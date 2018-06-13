
#import "NSObject.h"

@class SBThermalWarningSuppressionAssertion;

@protocol SBThermalWarningSuppressionAssertionDelegate <NSObject>
- (void)thermalWarningAssertionExpired:(SBThermalWarningSuppressionAssertion *)arg1;
@end

