
#import "SBAlertItem.h"

@interface SBThermalWarningAlertItem : SBAlertItem
{
    id <SBThermalWarningAlertItemDelegate> _delegate;
    int _actionTaken;
}

- (_Bool)unlocksScreen;
- (_Bool)undimsScreen;
- (void)_playPresentationSound;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didDeactivateForReason:(int)arg1;
- (void)willActivate;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)_autoCoolDown;
- (void)_tryToSendAction:(int)arg1;
@property(readonly, nonatomic, getter=isWaitingForResponse) _Bool waitingForResponse;
- (id)initWithDelegate:(id)arg1;

@end

