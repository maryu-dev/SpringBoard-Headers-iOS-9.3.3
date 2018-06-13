
#import "SBAlert.h"

#import "SBUIPasscodeLockViewDelegate.h"
#import "SBWorkspaceAlertAnimationProviding.h"

@class NSString;

@interface SBPasscodeEntryAlertViewController : SBAlert <SBUIPasscodeLockViewDelegate, SBWorkspaceAlertAnimationProviding>
{
    id <SBPasscodeEntryAlertViewControllerDelegate> _delegate;
    _Bool _attemptingUnlock;
}

- (void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(_Bool)arg2;
- (_Bool)_attemptUnlock:(id)arg1;
- (void)_authenticationSuccess:(id)arg1 fromMesa:(_Bool)arg2;
- (void)_authenticationFailure:(id)arg1 fromMesa:(_Bool)arg2;
- (void)_authenticationCancelled;
- (void)_configurePasscodeView:(id)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (_Bool)managesOwnStatusBarAtActivation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)hasTranslucentBackground;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)dealloc;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

