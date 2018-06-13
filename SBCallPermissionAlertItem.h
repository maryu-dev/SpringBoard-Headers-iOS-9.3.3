
#import "SBAlertItem.h"

@class NSString, NSURL, SBApplication;

@interface SBCallPermissionAlertItem : SBAlertItem
{
    NSURL *_url;
    SBApplication *_appHandlingURL;
    NSString *_sender;
}

- (_Bool)allowMenuButtonDismissal;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)initWithURL:(id)arg1 applicationHandlingURL:(id)arg2 sender:(id)arg3;

@end

