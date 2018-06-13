
#import "_UIRemoteViewController.h"

#import "SBSUIRemoteAlertItemContentHostInterface.h"

@class NSString;

@interface _SBRemoteAlertContentHostViewController : _UIRemoteViewController <SBSUIRemoteAlertItemContentHostInterface>
{
    id _delegate;
    NSString *_serviceClassName;
    _Bool _serviceHasSetPreferredContentSize;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_getPreferredContentSizeWithReplyBlock:(id)arg1;
- (id)description;

@end

