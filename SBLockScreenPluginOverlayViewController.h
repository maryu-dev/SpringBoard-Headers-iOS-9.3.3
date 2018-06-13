
#import "SBLockOverlayViewController.h"

@class SBAwayViewPluginController;

@interface SBLockScreenPluginOverlayViewController : SBLockOverlayViewController
{
    SBAwayViewPluginController *_pluginController;
}

- (id)_newOverlayView;
- (void)loadView;
- (id)initWithPluginController:(id)arg1;

@end

