
#import "NSObject.h"

@class SBPowerDownController;

@protocol SBPowerDownControllerDelegate <NSObject>
- (void)powerDownCanceled:(SBPowerDownController *)arg1;
- (void)powerDownRequested:(SBPowerDownController *)arg1;
@end

