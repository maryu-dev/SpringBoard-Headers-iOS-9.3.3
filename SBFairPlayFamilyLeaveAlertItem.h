
#import "SBAlertItem.h"

@class SBApplication;

@interface SBFairPlayFamilyLeaveAlertItem : SBAlertItem
{
    SBApplication *_app;
}

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)dismissOnLock;
- (id)initWithApplication:(id)arg1;

@end

