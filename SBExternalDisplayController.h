
#import "NSObject.h"

#import "FBDisplayManagerObserver.h"
#import "SBWorkspaceSlaving.h"

@class FBSDisplay, NSString;

@interface SBExternalDisplayController : NSObject <FBDisplayManagerObserver, SBWorkspaceSlaving>
{
    _Bool _listeningForApplicationStateChanges;
    FBSDisplay *_currentDisplay;
}

+ (id)sharedInstance;
- (id)master:(id)arg1 slaveTransactionsForTransitionRequest:(id)arg2;
- (void)displayManager:(id)arg1 didDisconnectDisplay:(id)arg2;
- (void)displayManager:(id)arg1 didConnectDisplay:(id)arg2;
- (void)displayManager:(id)arg1 willConnectDisplay:(id)arg2;
- (void)_connectDisplay:(id)arg1;
- (void)_handleDisplayConnectIfPossible:(id)arg1;
- (void)_appStateDidChange:(id)arg1;
- (void)_stopListeningForApplicationLaunch;
- (void)_startListeningForApplicationLaunch;
- (id)_slaveTransactionForMainDisplayTransitionRequest:(id)arg1 currentExternalDisplay:(id)arg2;
- (void)_noteScreenDidChangeMode:(id)arg1;
- (id)_getFirstRunningWatchApp;
- (_Bool)_displayConnectShouldWaitForAppRunning:(id)arg1;
- (_Bool)_shouldConnectDisplayNow:(id)arg1;
- (_Bool)_application:(id)arg1 canAccessDisplay:(id)arg2;
- (id)_eventLabelForEvent:(long long)arg1;
- (long long)_eventForMainDisplayTransitionRequest:(id)arg1;
- (id)expectedForegroundAppsOnDisplay:(id)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

