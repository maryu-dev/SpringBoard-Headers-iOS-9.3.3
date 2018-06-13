
#import "SBAlertItem.h"

@class NSURL;

@interface SBNoLocalApplicationAlertItem : SBAlertItem
{
    NSURL *_url;
    id _completion;
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithURL:(id)arg1 completion:(id)arg2;
- (id)init;

@end

