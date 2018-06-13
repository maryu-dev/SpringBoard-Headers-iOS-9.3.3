
#import "NSObject.h"

@class SBCCButtonController, SBControlCenterStatusUpdate;

@protocol SBCCButtonControllerDelegate <NSObject>
- (void)buttonController:(SBCCButtonController *)arg1 publishStatusUpdate:(SBControlCenterStatusUpdate *)arg2;
@end

