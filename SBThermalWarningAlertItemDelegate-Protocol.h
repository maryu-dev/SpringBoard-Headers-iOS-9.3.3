
#import "NSObject.h"

@class SBThermalWarningAlertItem;

@protocol SBThermalWarningAlertItemDelegate <NSObject>
- (void)thermalWarningAlert:(SBThermalWarningAlertItem *)arg1 didTriggerAction:(int)arg2;
@end

