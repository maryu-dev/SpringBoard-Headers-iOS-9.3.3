
#import "SBDataPlanAlertItem.h"

@class NSString;

@interface SBDataPlanCompletionAlertItem : SBDataPlanAlertItem
{
    NSString *_carrierName;
    _Bool _newAccount;
}

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithCarrierName:(id)arg1 newAccount:(_Bool)arg2;

@end

