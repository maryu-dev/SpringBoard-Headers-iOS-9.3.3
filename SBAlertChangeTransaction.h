
#import "BSTransaction.h"

#import "SBAlertManagerObserver.h"

@class NSString, SBAlert, SBAlertManager;

@interface SBAlertChangeTransaction : BSTransaction <SBAlertManagerObserver>
{
    SBAlertManager *_alertManager;
    SBAlert *_toAlert;
    SBAlert *_fromAlert;
    id <SBAlertChangeTransactionDelegate> _delegate;
    _Bool _deactivateAll;
    _Bool _suppressingActivationOcclusion;
    SBAlert *_alert;
}

- (void)_updateForegroundScenesUnderLock:(_Bool)arg1;
- (void)_addDeactivationMilestones;
- (void)_addActivationMilestones;
- (void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(_Bool)arg3;
- (void)alertManager:(id)arg1 willDeactivateAlert:(id)arg2 top:(_Bool)arg3;
- (void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_begin;
- (void)dealloc;
- (id)initWithAlertManager:(id)arg1 fromAlert:(id)arg2 deactivateAll:(_Bool)arg3;
- (id)initWithAlertManager:(id)arg1 toAlert:(id)arg2 fromAlert:(id)arg3;
- (id)initWithAlertManager:(id)arg1 toAlert:(id)arg2;
- (id)_initWithAlertManager:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

