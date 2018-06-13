
#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSString, SBAlertItem;

@interface SBClientAlertItemTestRecipe : NSObject <SBTestRecipe>
{
    SBAlertItem *_item;
}

+ (id)title;
- (id)_nextAlertItemToTest;
- (id)_mapsApp;
- (id)_anySUDescriptor;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)_dismissCurrentItem;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

