
#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "SBCardItemsControllerRemoteInterface.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSXPCListener;

@interface SBCardItemsController : NSObject <SBCardItemsControllerRemoteInterface, NSXPCListenerDelegate>
{
    NSMutableDictionary *_cardItems;
    NSMutableArray *_connections;
    NSXPCListener *_listener;
}

- (void)_updateThumbnailForCardItem:(id)arg1 withSnapshotter:(id)arg2 completion:(id)arg3;
- (void)getCardItemsForControllerWithIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)clearCardItemsForControllerWithIdentifier:(id)arg1;
- (void)removeCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
- (void)addCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
- (void)setCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
- (void)_activateAllCardItems;
- (void)cardItemsDidChange:(id)arg1 forControllerWithIdentifier:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

