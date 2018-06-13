
#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "SBStatusBarStyleOverridesAssertionServer.h"

@class FBWorkspaceEventQueue, NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <NSXPCListenerDelegate, SBStatusBarStyleOverridesAssertionServer>
{
    NSMutableArray *_runningUpdateTransactions;
    int _statusBarStyleOverrides;
    int _exclusiveStatusBarStyleOverrides;
    NSXPCListener *_xpcListener;
    NSMapTable *_assertionsByIdentifierByClientConnection;
    NSMapTable *_assertionsByStyleOverride;
    NSObject<OS_dispatch_queue> *_internalQueue;
    FBWorkspaceEventQueue *_eventQueue;
}

+ (id)sharedInstance;
- (void)_postStatusStringsByStyle:(id)arg1;
- (id)_statusStringsByStyleForActiveAssertionsByStyleOverride:(id)arg1 inactiveAssertionsByStyleOverride:(id)arg2;
- (void)_updateAppSceneSettingsForForegroundAppsAndPostAddedStyleOverrides:(int)arg1 removedStyleOverrides:(int)arg2;
- (void)_invalidateAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (int)_internalQueue_removeAssertionByStyleOverrides:(id)arg1;
- (int)_internalQueue_addAssertionByStyleOverrides:(id)arg1;
- (void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplications:(id)arg1 withHandler:(id)arg2;
- (void)_internalQueue_deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (void)setStatusString:(id)arg1 forAssertionWithIdentifier:(id)arg2;
- (void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;
- (void)activateStatusBarStyleOverridesAssertions:(id)arg1 reply:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)updateForegroundApplications:(id)arg1 withOptions:(unsigned long long)arg2 completion:(id)arg3;
- (void)invalidateStatusBarStyleOverridesAssertions:(id)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

