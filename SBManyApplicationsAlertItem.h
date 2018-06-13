
#import "SBAlertItem.h"

@class NSArray, NSURL;

@interface SBManyApplicationsAlertItem : SBAlertItem
{
    NSURL *_url;
    NSArray *_applications;
    id _completion;
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithURL:(id)arg1 applications:(id)arg2 completion:(id)arg3;
- (id)init;

@end

