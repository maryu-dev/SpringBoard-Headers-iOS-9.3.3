
#import "SBAlertItem.h"

#import "UIAlertViewDelegate.h"

@class NSString, SBApplicationIcon;

@interface SBAppProfileNotTrustedAlertItem : SBAlertItem <UIAlertViewDelegate>
{
    SBApplicationIcon *_icon;
    _Bool _launchApp;
}

- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)didDeactivateForReason:(int)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)initWithIcon:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

