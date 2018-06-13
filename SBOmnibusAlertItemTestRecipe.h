
#import "NSObject.h"

#import "SBTestRecipe.h"
#import "SBThermalWarningAlertItemDelegate.h"

@class NSString, SBAlertItem;

@interface SBOmnibusAlertItemTestRecipe : NSObject <SBThermalWarningAlertItemDelegate, SBTestRecipe>
{
    SBAlertItem *_item;
}

+ (id)title;
- (id)_nextAlertItemToTest;
- (id)_mapsApp;
- (id)_anySUDescriptor;
- (id)_anyLeafIcon;
- (id)_anyUserInstalledAppIcon;
- (id)_anyAppIcon;
- (void)thermalWarningAlert:(id)arg1 didTriggerAction:(int)arg2;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)_dismissCurrentItem;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

