
#import "NSObject.h"

@class SFAirDropDiscoveryController;

@protocol SFAirDropDiscoveryControllerDelegate <NSObject>

@optional
- (void)discoveryControllerLegacyModePropertiesDidChange:(SFAirDropDiscoveryController *)arg1;
- (void)discoveryControllerVisibilityDidChange:(SFAirDropDiscoveryController *)arg1;
- (void)discoveryControllerSettingsDidChange:(SFAirDropDiscoveryController *)arg1;
@end

