
#import "SBDataPlanAccountAlertItem.h"

@class NSString;

@interface SBDataPlanFailureAlertItem : SBDataPlanAccountAlertItem
{
    NSString *_carrierName;
    _Bool _newAccount;
}

+ (id)nowButtonTitle;
+ (id)laterButtonTitle;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAccountURL:(id)arg1 carrierName:(id)arg2 newAccount:(_Bool)arg3;

@end

