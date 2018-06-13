
#import "SBAlertAdapter.h"

#import "_SBRemoteAlertHostViewControllerDelegate.h"

@class NSMutableSet, NSString, _SBRemoteAlertHostViewController;

@interface SBRemoteAlertAdapter : SBAlertAdapter <_SBRemoteAlertHostViewControllerDelegate>
{
    _SBRemoteAlertHostViewController *_remoteAlertHostViewController;
    id <SBRemoteAlertAdapterDelegate> _remoteAlertAdapterDelegate;
    NSString *_impersonatedApplicationBundleID;
    _Bool _dismissWithHomeButton;
    _Bool _userRequestedHomeButtonDismissal;
    long long _desiredButtonEvents;
    _Bool _wantsWallpaperTunnel;
    _Bool _hasTranslucentBackground;
    long long _requestedBackgroundStyle;
    _Bool _allowsAlertStacking;
    long long _dismissalAnimationStyle;
    _Bool _disableFadeInAnimation;
    NSMutableSet *_idleTimerDisabledReasons;
    double _requestedAutoLockTime;
    _Bool _hasCustomStatusBarStyle;
    long long _customStatusBarStyle;
    int _desiredStatusBarStyleOverrides;
    _Bool _wantsToShowStatusBar;
    _Bool _wantsToManageStatusBarAtActivation;
    _Bool _canManageStatusBarVisibility;
    _Bool _suppressesSiri;
    _Bool _dismissOnUILock;
    long long _desiredLaunchingInterfaceOrientation;
    _Bool _dontCancelStatusBarStyleOverrides;
    id _lockUIAndDismissActions;
    id _clientActivationHandler;
    id _clientDeactivationHandler;
    long long _whitePointAdaptivityStyle;
    _Bool _beingPresentedObscured;
}

+ (void)requestWithConfiguration:(id)arg1 completion:(id)arg2;
+ (void)requestRemoteViewService:(id)arg1 options:(id)arg2 completion:(id)arg3;
+ (void)_requestWithServiceName:(id)arg1 serviceClass:(id)arg2 options:(id)arg3 completion:(id)arg4;
- (long long)_preferredWhitePointAdaptivityStyle;
- (_Bool)isRemote;
- (_Bool)matchesInCallUIService;
- (_Bool)matchesAnyInCallService;
- (_Bool)matchesRemoteAlertService:(id)arg1 options:(id)arg2;
- (void)remoteAlertWantsToSetWhitePointAdaptivityStyle:(long long)arg1;
- (void)remoteAlertWantsToLockUIAndDismiss;
- (void)remoteAlertWantsToDisableFadeInAnimation:(_Bool)arg1;
- (void)remoteAlertWantsToDismissOnUILock:(_Bool)arg1;
- (void)remoteAlertWantsToSetStatusBarHidden:(_Bool)arg1 withDuration:(double)arg2;
- (void)remoteAlertWantsToSetAutoLockDuration:(double)arg1;
- (void)remoteAlertWantsToSetIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)remoteAlertWantsToSetDesiredStatusBarStyleOverrides:(int)arg1;
- (void)remoteAlertWantstoSetDismissalAnimationStyle:(long long)arg1;
- (void)remoteAlertWantsToAllowAlertStacking:(_Bool)arg1;
- (void)remoteAlertWantsMenuButtonDismissal:(_Bool)arg1;
- (void)remoteAlertWantsToSetBackgroundStyle:(long long)arg1 withDuration:(double)arg2;
- (void)remoteAlertWantsWallpaperTunnelActive:(_Bool)arg1;
- (void)remoteAlertWantsToUpdateAllowedHardwareButtonEvents:(long long)arg1;
- (void)remoteAlertWantsToAllowBanners:(_Bool)arg1;
- (void)remoteAlertDidTerminateWithError:(id)arg1;
- (void)remoteAlertDidRequestDismissal;
- (void)_didTerminateWithError:(id)arg1;
- (_Bool)_shouldDismissSwitcherOnActivation;
- (id)_displayLayoutElementIdentifier;
- (void)_setSuppressesSiri:(_Bool)arg1;
- (void)_setShouldDisableFadeInAnimation:(_Bool)arg1;
- (void)_setCustomStatusBarStyle:(long long)arg1;
- (void)_setHasTranslucentBackground:(_Bool)arg1;
- (void)_setLaunchingInterfaceOrientation:(long long)arg1;
- (void)_setDismissalAnimationStyle:(long long)arg1;
- (void)_setWantsWallpaperTunnel:(_Bool)arg1 immediately:(_Bool)arg2;
- (void)_setImpersonatedApplicationBundleID:(id)arg1;
- (void)_setDismissWithHomeButton:(_Bool)arg1;
- (void)_terminate;
- (_Bool)managesOwnStatusBarAtActivation;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)showsSpringBoardStatusBar;
- (int)statusBarStyleOverridesToCancel;
- (long long)statusBarStyle;
- (_Bool)allowsStackingOfAlert:(id)arg1;
- (_Bool)hasTranslucentBackground;
- (_Bool)suppressesSiri;
- (_Bool)suppressesControlCenter;
- (_Bool)suppressesNotificationCenter;
- (void)handleDoubleHeightStatusBarTap;
- (_Bool)handleHeadsetButtonPressed:(_Bool)arg1;
- (_Bool)handleVolumeDownButtonPressed;
- (_Bool)handleVolumeUpButtonPressed;
- (_Bool)handleLockButtonPressed;
- (_Bool)handleMenuButtonTap;
- (double)autoLockTime;
- (void)deactivate;
- (void)activate;
- (void)synchronizeAnimationsInActions:(id)arg1;
- (void)setCanManageStatusBarVisibility:(_Bool)arg1;
- (void)setWantsToManageStatusBarAtActivation:(_Bool)arg1;
- (void)setActivationHandler:(id)arg1 deactivationHandler:(id)arg2;
- (void)setLockUIAndDismissActions:(id)arg1;
- (void)noteActivatedForCustomReason:(id)arg1;
- (void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1;
- (void)noteShouldStopDisablingStatusBarOverrides;
@property(readonly, nonatomic) __weak NSString *serviceBundleIdentifier;
- (id)_impersonatesApplicationWithBundleID;
- (void)_cleanupIdleTimerDisabledReasons;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;
- (id)_initWithRemoteAlertHostViewController:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

