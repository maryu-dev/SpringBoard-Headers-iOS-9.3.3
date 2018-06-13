
#import "SBPasscodeEntryAlertView.h"

@class SUAutoInstallOperation;

@interface SBInstallTonightPasscodeEntryAlertView : SBPasscodeEntryAlertView
{
    SUAutoInstallOperation *_installOperation;
}

- (id)_bodyTextToModelSpecificLocalizedKey:(id)arg1;
- (void)alertDisplayWillBecomeVisible;
- (id)_passcodeViewGenerator;
- (void)setInstallTonightOperation:(id)arg1;

@end

