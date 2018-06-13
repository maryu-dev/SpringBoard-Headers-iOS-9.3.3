
#import "SBAlertItem.h"

@class SBCCButtonModule;

@interface SBCCButtonModuleUnavailableAlertItem : SBAlertItem
{
    SBCCButtonModule *_module;
}

+ (_Bool)presentAlertItemForButtonModule:(id)arg1;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;

@end

