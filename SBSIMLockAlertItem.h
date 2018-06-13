
#import "SBAlertItem.h"

@interface SBSIMLockAlertItem : SBAlertItem
{
    long long _status;
    long long _okButtonIndex;
    long long _unlockButtonIndex;
}

+ (id)alertTitleForStatus:(long long)arg1;
+ (id)alertTitleForStatus:(long long)arg1 languageCode:(id)arg2;
- (_Bool)reappearsAfterLock;
- (_Bool)reappearsAfterUnlock;
- (_Bool)pendInSetupIfNotAllowed;
- (_Bool)allowInSetup;
- (_Bool)forcesModalAlertAppearance;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)performUnlockAction;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)unlock;
- (void)didDeactivateForReason:(int)arg1;
- (long long)status;
- (id)alertTextForLanguageCode:(id)arg1;
- (id)alertTitleForLanguageCode:(id)arg1;
- (_Bool)canUnlock;
- (void)dealloc;
- (void)_resetButtonIndexes;
- (id)initWithStatus:(long long)arg1;

@end

