
#import "SBAlertItem.h"

@class SBSoftwareUpdateController, SUDescriptor;

@interface SBBaseSoftwareUpdateAlertItem : SBAlertItem
{
    SUDescriptor *_descriptor;
    SBSoftwareUpdateController *_controller;
}

- (void)willDeactivateForReason:(int)arg1;
- (_Bool)dismissOnLock;
- (_Bool)undimsScreen;
- (_Bool)unlocksScreen;
- (_Bool)shouldShowInLockScreen;
- (_Bool)forcesModalAlertAppearance;
- (void)activateDisplayWithURL:(id)arg1;
- (void)activateSoftwareUpdateSettingsDisplay;
- (id)updateName;
- (id)initWithDescriptor:(id)arg1 softwareUpdateController:(id)arg2;

@end

