
#import "NSObject.h"

@class NSString, SBApplication, SBProxyRemoteView;

@interface SBRemoteViewInfo : NSObject
{
    NSString *_remoteViewIdentifier;
    SBProxyRemoteView *_proxyRemoteView;
    unsigned int _contextID;
    SBApplication *_application;
    struct CGSize _viewSize;
}


@end

