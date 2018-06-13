
#import "NSObject.h"

@class SBAwayViewPluginController, SBLockScreenPluginController;

@protocol SBLockScreenPluginControllerDelegate <NSObject>
- (void)pluginController:(SBLockScreenPluginController *)arg1 activePluginDidChange:(SBAwayViewPluginController *)arg2;
@end

