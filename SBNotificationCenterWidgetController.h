
#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "_NCWidgetController_Host_IPC.h"

@class NSString, NSXPCListener;

@interface SBNotificationCenterWidgetController : NSObject <_NCWidgetController_Host_IPC, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
}

+ (id)defaultWidgetController;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
+ (_Bool)isInternalWidgetBundleIdentifier:(id)arg1;
+ (id)containingBundleIdentifierForWidgetWithBundleIdentifer:(id)arg1;
+ (id)containingBundleProxyForWidgetWithBundleIdentifer:(id)arg1;
- (void)__setHasContent:(_Bool)arg1 forWidgetWithBundleIdentifier:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

