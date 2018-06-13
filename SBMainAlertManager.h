
#import "SBAlertManager.h"

@class NSMapTable, SBDisableActiveInterfaceOrientationChangeAssertion;

@interface SBMainAlertManager : SBAlertManager
{
    NSMapTable *_alertToAccessoryWrappersMap;
    SBDisableActiveInterfaceOrientationChangeAssertion *_orientationLockAssertion;
}

- (void)_assistantVisibilityDidChange:(id)arg1;
- (void)_controlCenterDidDeactivate:(id)arg1;
- (void)_notificationCenterDidDeactivate:(id)arg1;
- (void)_disablePortraitOrientationLock;
- (void)_enablePortraitOrientationLock;
- (_Bool)_needsPortraitOrientationLockForAlert:(id)arg1;
- (void)_removeHostedAccessoryViewsForRequester:(id)arg1;
- (void)_stopHostingAccessoryWindowsForDeactivatingAlert:(id)arg1;
- (void)_stopHostingAccessoryWindowsForWrapper:(id)arg1;
- (void)_hostAccessoryWindowsForActivatingAlert:(id)arg1;
- (void)_noteFinishedWithAlert:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_noteAlertWillDismiss:(id)arg1;
- (void)_deactivate:(id)arg1;
- (_Bool)_canAutorotate;
- (void)_noteWillDisplayAlert:(id)arg1;
- (_Bool)deactivate:(id)arg1;
- (void)disablePortraitOrientationLockIfPossibleForAlert:(id)arg1;
- (id)hostedAccessoryViewsForAlert:(id)arg1;
- (void)hideHostedAccessoryViewsForAlert:(id)arg1;
- (void)dealloc;
- (id)initWithScreen:(id)arg1 delegate:(id)arg2;

@end

