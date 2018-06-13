
#import "NSObject.h"

@class NSMutableSet;

@interface SBBluetoothAccessoryBatteryMonitor : NSObject
{
    NSMutableSet *_accessoryNamesInLowPower;
}

- (id)descriptionBuilder;
- (id)description;
- (void)dealloc;
- (void)_popLowPowerAlertForAccessoryIfNecessary:(id)arg1;
- (id)init;

@end

