
#import "_UIRemoteViewController.h"

#import "SBSUICarDisplayNowPlayingHostInterface.h"
#import "SBSUICarDisplayNowPlayingInterface.h"

@interface SBStarkNowPlayingService : _UIRemoteViewController <SBSUICarDisplayNowPlayingHostInterface, SBSUICarDisplayNowPlayingInterface>
{
    id <SBStarkNowPlayingServiceDelegate> _delegate;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
- (void)switchToState:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

