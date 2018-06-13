
#import "UIView.h"

@class NSString, SBApplication;

@interface SBProxyRemoteView : UIView
{
    id <SBProxyRemoteViewDelegate> _delegate;
    SBApplication *_app;
    NSString *_remoteViewIdentifier;
    _Bool _remoteViewOpaque;
    NSString *_hostRequester;
}

+ (Class)layerClass;
- (void)disconnect;
- (void)noteConnectionLost;
- (void)_setIsConnected:(_Bool)arg1;
- (void)connectToContextID:(unsigned int)arg1 forIdentifier:(id)arg2 application:(id)arg3;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)init;

@end

