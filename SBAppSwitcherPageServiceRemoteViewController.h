
#import "_UIRemoteViewController.h"

#import "_SBUISwitcherPageHostInterface.h"

@interface SBAppSwitcherPageServiceRemoteViewController : _UIRemoteViewController <_SBUISwitcherPageHostInterface>
{
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
- (_Bool)__shouldRemoteViewControllerFenceOperations;

@end

