
#import "NSObject.h"

#import "SBScreenConnectionHandler.h"
#import "SBStarkScreenControllerDelegate.h"

@class NSHashTable, NSMutableDictionary, NSString, SBLockScreenDisableAssertion, SBPasscodeLockDisableAssertion, SBSStatusBarStyleOverridesAssertion, SBSpuriousScreenUndimmingAssertion, SBStarkScreenController;

@interface SBStarkScreenManager : NSObject <SBScreenConnectionHandler, SBStarkScreenControllerDelegate>
{
    NSMutableDictionary *_displayToControllerMap;
    SBStarkScreenController *_currentScreenController;
    NSHashTable *_observers;
    SBSpuriousScreenUndimmingAssertion *_spuriousScreenUndimmingAssertion;
    SBPasscodeLockDisableAssertion *_deviceLockDisableAssertion;
    SBLockScreenDisableAssertion *_lockScreenDisableAssertion;
    SBPasscodeLockDisableAssertion *_earlyConnectDeviceLockDisableAssertion;
    SBSStatusBarStyleOverridesAssertion *_carPlayStatusBarStyleOverrideAssertion;
    SBSStatusBarStyleOverridesAssertion *_earlyCarPlayStatusBarStyleOverrideAssertion;
    _Bool _hasShownConnectedAlert;
    _Bool _delayShowingConnectedAlert;
    _Bool _geoSupported;
    _Bool _earlyStarkConnection;
    _Bool _delayUpdatingLockOutMode;
}

+ (_Bool)starkScreenIsAttached;
+ (id)sharedInstance;
- (void)screenManager:(id)arg1 didTriggerConnectionHandlerEvent:(long long)arg2 forScreen:(id)arg3;
- (_Bool)screenManager:(id)arg1 shouldBindConnectionHandlerToScreen:(id)arg2;
- (void)starkScreenControllerWantsRelockUI:(id)arg1;
- (_Bool)starkScreenControllerShouldDelayUpdateLockoutMode:(id)arg1;
- (void)_promptConnectionSteps;
- (void)_clearPromptState;
- (void)_clearEarlyConnectState;
- (void)_clearEarlyConnectStateTimerExpired;
- (void)_unscheduleClearEarlyConnectStateExpirationTimer;
- (void)_scheduleClearEarlyConnectStateExpirationTimer;
- (void)_earlyStarkConnection;
- (void)_pairedVehiclesChanged:(id)arg1;
- (void)_usbStarkConnected;
- (void)_setCurrentController:(id)arg1;
- (void)_updateGeoSupport;
- (_Bool)shouldShowCarPlayStatusBarItem;
- (id)screenControllerForDisplay:(id)arg1;
- (_Bool)promptRelockUIIfAppropriate;
- (_Bool)handleUnlockAttempt;
- (void)prepareToHandleUnlockAttempt;
- (_Bool)isGeoSupported;
- (_Bool)isStarkActive;
- (id)activeScreenController;
- (_Bool)starkScreenIsAttached;
- (id)currentScreenController;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

