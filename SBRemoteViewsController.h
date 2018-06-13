
#import "NSObject.h"

@class NSMutableDictionary;

@interface SBRemoteViewsController : NSObject
{
    NSMutableDictionary *_registeredRemoteViewInfos;
    NSMutableDictionary *_unregisteredRemoteViewInfos;
}

+ (id)sharedInstance;
- (void)unregisterRemoteViewsForApplication:(id)arg1;
- (id)proxyRemoteViewForIdentifier:(id)arg1;
- (void)_sequesterProxyRemoteView:(id)arg1;
- (id)_newProxyRemoteViewForIdentifier:(id)arg1;
- (void)unregisterRemoteIdentifier:(id)arg1 application:(id)arg2;
- (void)registerRemoteContextID:(unsigned int)arg1 forIdentifier:(id)arg2 opaque:(_Bool)arg3 size:(struct CGSize)arg4 application:(id)arg5;
- (void)unregisterProxyRemoteView:(id)arg1;
- (id)init;

@end

