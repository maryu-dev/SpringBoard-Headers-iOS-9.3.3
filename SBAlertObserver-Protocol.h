
#import "NSObject.h"

@class SBAlert;

@protocol SBAlertObserver <NSObject>

@optional
- (void)alertBannerSuppressionChanged:(SBAlert *)arg1;
- (void)alertDidDeactivate:(SBAlert *)arg1;
@end

