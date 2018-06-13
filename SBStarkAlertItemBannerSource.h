
#import "SBStarkBannerSource.h"

#import "SBAlertItemsControllerObserver.h"

@class NSString;

@interface SBStarkAlertItemBannerSource : SBStarkBannerSource <SBAlertItemsControllerObserver>
{
}

- (void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3;
- (void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2;
- (void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void *)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

