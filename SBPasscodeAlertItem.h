
#import "SBAlertItem.h"

#import "UITextFieldDelegate.h"

@class NSString;

@interface SBPasscodeAlertItem : SBAlertItem <UITextFieldDelegate>
{
    int _mode;
    int _unlockScreenType;
    int _simplePasscodeType;
    NSString *_errorString;
    _Bool _hasEmergencyCall;
    _Bool _alreadySubmittedPassword;
}

- (void)didEndCall;
- (void)_setErrorString:(id)arg1;
- (_Bool)shouldShowInLockScreen;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)cleanPreviousConfiguration;
- (void)returnKeyPressed:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithPasscodeMode:(int)arg1 unlockScreenType:(int)arg2 simplePasscodeType:(int)arg3;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

