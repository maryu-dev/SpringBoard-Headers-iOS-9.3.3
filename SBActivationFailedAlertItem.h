
#import "SBAlertItem.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface SBActivationFailedAlertItem : SBAlertItem <UIAlertViewDelegate>
{
    _Bool _showRetryButton;
    _Bool _showSupportNumber;
}

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)performUnlockAction;
- (id)initWithFailureCount:(int)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

