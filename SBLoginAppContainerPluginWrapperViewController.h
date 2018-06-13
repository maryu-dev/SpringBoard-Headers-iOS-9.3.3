
#import "UIViewController.h"

@class NSString, SBAwayViewPluginController, SBLockScreenPluginLoader, SBLockScreenPluginOverlayViewController, SBLoginAppContainerOverlayWrapperView, SBLoginAppContainerPluginWrapperView;

@interface SBLoginAppContainerPluginWrapperViewController : UIViewController
{
    NSString *_pluginName;
    SBLockScreenPluginLoader *_pluginLoader;
    SBAwayViewPluginController *_pluginController;
    SBLockScreenPluginOverlayViewController *_overlayController;
    SBLoginAppContainerOverlayWrapperView *_overlayWrapperView;
    SBLoginAppContainerPluginWrapperView *_containerView;
}

- (void)loadView;
- (id)initWithPluginName:(id)arg1;

@end

