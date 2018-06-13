
#import "UIViewController.h"

@class NSArray, NSMutableArray, SBAlertItem, SBUIBiometricEventMonitor;

@interface SBLockScreenModalAlertViewController : UIViewController
{
    NSMutableArray *_pendingAlertItems;
    NSMutableArray *_pendingSuperModalAlertItems;
    NSMutableArray *_presentedAlertItems;
    SBAlertItem *_currentAlertItem;
    SBUIBiometricEventMonitor *_bioEventMonitor;
}

- (void)_pendOrDeactivateAlertItem:(id)arg1 animated:(_Bool)arg2;
- (void)_removePresentedAlertItem:(id)arg1;
- (void)_addPresentedAlertItem:(id)arg1;
- (void)_pendAlertItem:(id)arg1;
- (id)allPendingAlertItems;
- (_Bool)hasSuperModalAlertItems;
- (id)dequeueAllPendingSuperModalAlertItems;
- (_Bool)isCurrentAlertItemOrphaned;
- (void)pendOrDeactivateCurrentAlertItem;
- (id)dequeueAllPendingAlertItems;
- (void)deactivateAlertItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)activateAlertItem:(id)arg1 pended:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)hasAlertItem:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

