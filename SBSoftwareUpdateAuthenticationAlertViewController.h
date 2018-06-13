
#import "SBPasscodeEntryAlertViewController.h"

#import "SBPasscodeEntryAlertViewDelegate.h"
#import "SBUIPasscodeLockViewDelegate.h"

@class NSString, PSSoftwareUpdateTermsManager, SUAutoInstallOperation, SUDownload, UIViewController;

@interface SBSoftwareUpdateAuthenticationAlertViewController : SBPasscodeEntryAlertViewController <SBPasscodeEntryAlertViewDelegate, SBUIPasscodeLockViewDelegate>
{
    id _completionBlock;
    NSString *_passcode;
    SUAutoInstallOperation *_installOperation;
    SUDownload *_download;
    unsigned long long _installType;
    UIViewController *_termsAndConditionsController;
    PSSoftwareUpdateTermsManager *_preferencesSUManager;
    _Bool _showingTermsAndConditions;
    _Bool _isN94;
    id <SBPasscodeEntryAlertViewControllerDelegate> _delegate;
}

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_termsDisagree;
- (void)_termsAgree;
- (void)_sendCompletionResponse:(_Bool)arg1;
- (void)_dismissSelf:(_Bool)arg1;
- (void)_sendDeactivationResponseFailureIfNecessary;
- (void)_dismissTermsAndConditionsIfNecessaryAnimated:(_Bool)arg1 withCompletion:(id)arg2;
- (void)_presentTermsAndConditionsWithCompletion:(id)arg1;
- (_Bool)_shouldShowPasscodeView;
- (_Bool)passcodeAlertViewShouldShowAutomaticallyWhenVisible:(id)arg1;
- (_Bool)suppressesSiri;
- (_Bool)suppressesNotificationCenter;
- (_Bool)suppressesControlCenter;
- (_Bool)suppressesBanners;
- (void)deactivate;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)_authenticationSuccess:(id)arg1 fromMesa:(_Bool)arg2;
- (void)_authenticationCancelled;
- (void)_configurePasscodeView:(id)arg1;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)dealloc;
- (id)initWithDownload:(id)arg1 withInstallType:(unsigned long long)arg2 withInstallOperation:(id)arg3;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

