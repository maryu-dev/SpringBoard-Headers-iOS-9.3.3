
#import "SBDataPlanAlertItem.h"

@class NSURL;

@interface SBDataPlanAccountAlertItem : SBDataPlanAlertItem
{
    NSURL *_accountURL;
}

+ (id)nowButtonTitle;
+ (id)laterButtonTitle;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAccountURL:(id)arg1;

@end

