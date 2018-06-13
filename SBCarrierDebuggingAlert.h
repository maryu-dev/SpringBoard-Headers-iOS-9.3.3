
#import "SBDismissOnlyAlertItem.h"

@interface SBCarrierDebuggingAlert : SBDismissOnlyAlertItem
{
}

+ (_Bool)haveShownAlert;
- (void)didDeactivateForReason:(int)arg1;

@end

