
#import "SBDataPlanAccountAlertItem.h"

@class NSNumber;

@interface SBDataPlanUsageAlertItem : SBDataPlanAccountAlertItem
{
    NSNumber *_remainingPortion;
}

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAccountURL:(id)arg1 usage:(id)arg2;

@end

