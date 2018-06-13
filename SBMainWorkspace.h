
#import "SBWorkspace.h"

#import "BSTransactionObserver.h"
#import "BSWatchdogDelegate.h"
#import "FBApplicationProcessObserver.h"
#import "FBProcessManagerObserver.h"
#import "FBSceneManagerObserver.h"
#import "FBSystemServiceDelegate.h"
#import "MCProfileConnectionObserver.h"
#import "SBAlertManagerDelegate.h"
#import "SBAlertManagerObserver.h"
#import "SBReachabilityObserver.h"
#import "SBStarkScreenControllerObserver.h"
#import "SBStarkScreenManagerObserver.h"

@class BSEventQueueLock, BSWatchdog, FBDisplayLayoutTransition, FBSceneManager, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTimer, SBAlertManager, SBAppStatusBarSettingsAssertion, SBMainAlertManager, SBScreenTimeTrackingController, SBWindow, SBWindowSelfHostWrapper, SBWorkspaceTransaction;

@interface SBMainWorkspace : SBWorkspace <BSTransactionObserver, SBAlertManagerDelegate, SBAlertManagerObserver, SBStarkScreenManagerObserver, SBStarkScreenControllerObserver, SBReachabilityObserver, FBSystemServiceDelegate, FBProcessManagerObserver, FBApplicationProcessObserver, BSWatchdogDelegate, FBSceneManagerObserver, MCProfileConnectionObserver>
{
    _Bool _initialized;
    FBSceneManager *_sceneManager;
    SBMainAlertManager *_alertManager;
    BSEventQueueLock *_suspensionLock;
    _Bool _alertManagerIsDeactivatingAlert;
    _Bool _alertManagerIsActivatingLockAlert;
    _Bool _medusaEnabled;
    SBScreenTimeTrackingController *_screenTimeTrackingController;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    SBWorkspaceTransaction *_currentTransaction;
    BSEventQueueLock *_currentTransactionLock;
    BSWatchdog *_transactionWatchdog;
    NSTimer *_relaunchTimer;
    NSMutableArray *_applicationsToRelaunch;
    SBWindow *_reachabilityWindow;
    SBWindowSelfHostWrapper *_reachabilityHostWrapper;
    SBWindow *_reachabilityEffectWindow;
    NSMutableDictionary *_extensionHandlersByType;
    NSMutableSet *_foregroundAppPidsWhenDisplaySecureModeWasEnabled;
    SBAppStatusBarSettingsAssertion *_statusBarVisibilityAssertion;
    NSMutableDictionary *_appActivationFlagsForSceneUpdates;
    NSMutableSet *_activeSuspendedWorkspaceTransitions;
}

+ (id)debugDescription;
+ (id)_sharedInstanceWithNilCheckPolicy:(long long)arg1;
+ (id)_instanceIfExists;
+ (id)sharedInstance;
+ (void)start;
- (id)_handlerForExtensionPoint:(id)arg1;
- (void)_unregisterHandler:(id)arg1 forExtensionPoint:(id)arg2;
- (void)_registerHandler:(id)arg1 forExtensionPoint:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_exitReachabilityModeWithCompletion:(id)arg1;
- (void)handleReachabilityModeDeactivated;
- (void)handleRevealNotificationCenterGesture:(id)arg1;
- (void)handleCancelReachabilityRecognizer:(id)arg1;
- (void)handleReachabilityModeActivated;
- (void)_disableReachabilityImmediately:(_Bool)arg1;
- (void)starkScreenController:(id)arg1 didChangeStateFromState:(long long)arg2;
- (void)starkScreenManagerDidChangeCurrentController:(id)arg1;
- (void)starkScreenManagerWillChangeCurrentController:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (void)watchdogFired:(id)arg1;
- (void)watchdogStarted:(id)arg1;
- (void)alertManager:(id)arg1 didRemoveAlert:(id)arg2 fromWindow:(id)arg3;
- (void)alertManager:(id)arg1 didTearDownAlertWindow:(id)arg2;
- (void)alertManager:(id)arg1 willTearDownAlertWindow:(id)arg2;
- (void)alertManager:(id)arg1 topAlertDidChangeOrientationEventsEnabled:(id)arg2;
- (void)alertManager:(id)arg1 topAlert:(id)arg2 didChangeStatusBarVisibility:(_Bool)arg3;
- (void)alertManager:(id)arg1 topAlert:(id)arg2 requestsWallpaperStyleChangeWithAnimationFactory:(id)arg3;
- (void)alertManager:(id)arg1 didChangeTopAlertFromAlert:(id)arg2 toAlert:(id)arg3;
- (void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(_Bool)arg3;
- (void)alertManager:(id)arg1 willDeactivateAlert:(id)arg2 top:(_Bool)arg3;
- (void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (unsigned long long)alertManager:(id)arg1 defaultSupportedInterfaceOrientationsForAlert:(id)arg2;
- (long long)alertManager:(id)arg1 defaultInterfaceOrientationForPresentationOfAlert:(id)arg2;
- (_Bool)alertManager:(id)arg1 defaultShouldAutorotateForAlert:(id)arg2;
- (id)alertManager:(id)arg1 newAlertWindowForScene:(id)arg2;
- (_Bool)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2;
- (double)sceneLevelForAlerts;
- (struct CGRect)sceneFrameForAlerts:(id)arg1;
- (void)systemServicePrepareForShutdown:(id)arg1 andReboot:(_Bool)arg2;
- (void)systemServicePrepareForExit:(id)arg1 andRelaunch:(_Bool)arg2;
- (void)_updateStatusBarTimeItemEnabled;
- (void)systemService:(id)arg1 handleActions:(id)arg2 origin:(id)arg3 withResult:(id)arg4;
- (void)systemService:(id)arg1 isPasscodeLockedOrBlockedWithResult:(id)arg2;
- (void)_promptUnlockWithHandler:(id)arg1;
- (void)_handleOpenURLRequest:(id)arg1 application:(id)arg2 options:(id)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(id)arg6;
- (void)systemService:(id)arg1 handleOpenURLRequest:(id)arg2 application:(id)arg3 options:(id)arg4 origin:(id)arg5 withResult:(id)arg6;
- (void)_handleOpenApplicationRequest:(id)arg1 options:(id)arg2 origin:(id)arg3 withResult:(id)arg4;
- (id)_validateRequestToOpenApplication:(id)arg1 options:(id)arg2 origin:(id)arg3 errorCode:(long long *)arg4;
- (void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 options:(id)arg3 origin:(id)arg4 withResult:(id)arg5;
- (void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(id)arg3;
- (void)applicationProcessDebuggingStateDidChange:(id)arg1;
- (void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2;
- (void)applicationProcessDidLaunch:(id)arg1;
- (void)applicationProcessWillLaunch:(id)arg1;
- (void)processDidExit:(id)arg1;
- (void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 success:(_Bool)arg4;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)_noteSceneUpdateDidActivateApp:(_Bool)arg1 withSceneIdentifier:(id)arg2;
- (void)_releaseStatusBarVisibilityAssertion;
- (void)_acquireStatusBarVisibilityAssertion:(_Bool)arg1;
- (int)_statusBarStyleOverridesToCancelWithoutConsideringAlerts;
- (int)_statusBarStyleOverridesToCancel;
- (void)updateInterruptedByCallSettingsFrom:(id)arg1 to:(id)arg2;
- (_Bool)_applicationProcessExited:(id)arg1 withContext:(id)arg2;
- (_Bool)_handleSetupExited:(id)arg1;
- (void)_deviceWillDisableDisplaySecureMode:(id)arg1;
- (void)_deviceWillEnableDisplaySecureMode:(id)arg1;
- (void)_invalidateRelaunchTimer;
- (void)_memoryPressureRelieved:(id)arg1;
- (void)_memoryPressureWarn:(id)arg1;
- (void)_launchNextPendedAutoLaunchApp;
- (void)_scheduleRelaunchTimerIfNecessary;
- (void)_handleBuddyLaunchFinished;
- (id)_workspaceApplicationForBundleIdentifier:(id)arg1;
- (id)_workspaceApplicationForApplication:(id)arg1;
- (id)_applicationForIdentifier:(id)arg1;
- (void)_updateFrontMostApplicationEventPort;
- (void)_finishInitialization;
- (void)_resume;
- (void)_suspend;
- (void)_updateMedusaEnablementAndNotify:(_Bool)arg1;
- (void)_medusaPrefMayHaveChanged;
- (id)_selectTransactionForAppActivationRequest:(id)arg1 canDeactivateAlerts:(_Bool)arg2;
- (id)_selectTransactionForAppActivationRequest:(id)arg1;
- (id)_selectTransactionForAppExited:(id)arg1;
- (id)_selectTransactionForAppRelaunch:(id)arg1;
- (id)_selectTransactionForAppActivationUnderMainScreenLockRequest:(id)arg1;
- (id)_selectTransactionForAppActivationUnderMainScreenLock:(id)arg1 withResult:(id)arg2;
- (id)_selectTransactionForReturningToTheLockScreenWithRequest:(id)arg1 fromApp:(id)arg2;
- (id)_selectTransactionForReturningToTheLockScreenFromApp:(id)arg1 forceToBuddy:(_Bool)arg2 withResult:(id)arg3;
- (id)_selectTransactionForReturningToTheLockScreenWithResult:(id)arg1;
- (_Bool)_setCurrentTransactionForRequest:(id)arg1 fallbackProvider:(id)arg2;
- (_Bool)_executeApplicationTransitionRequest:(id)arg1;
- (_Bool)_executeAlertTransitionRequest:(id)arg1;
- (void)_determineSourceForTransitionRequest:(id)arg1;
- (_Bool)_preflightTransitionRequest:(id)arg1;
- (_Bool)_executeTransitionRequest:(id)arg1 options:(unsigned long long)arg2 validator:(id)arg3;
- (id)layoutController;
- (id)transactionForTransitionRequestDeactivatingAlerts:(id)arg1;
- (id)transactionForTransitionRequest:(id)arg1;
- (id)_transactionForTransitionRequest:(id)arg1 canDeactivateAlerts:(_Bool)arg2;
- (_Bool)executeTransitionRequest:(id)arg1 withValidator:(id)arg2;
- (_Bool)executeTransitionRequest:(id)arg1;
- (_Bool)requestTransitionWithOptions:(unsigned long long)arg1 builder:(id)arg2 validator:(id)arg3;
- (_Bool)requestTransitionWithBuilder:(id)arg1;
- (id)createRequestForApplicationActivation:(id)arg1 options:(unsigned long long)arg2;
- (id)createRequestWithOptions:(unsigned long long)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1 eventQueue:(id)arg2;
- (id)init;

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

