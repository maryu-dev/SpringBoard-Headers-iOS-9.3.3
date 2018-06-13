
#import "SBAlert.h"

@class SBLockScreenActionContext;

@interface SBLockScreenViewControllerBase : SBAlert
{
    id <SBLockScreenViewControllerDelegate> _delegate;
    SBLockScreenActionContext *_customLockScreenActionContext;
}

- (id)allPendingAlertItems;
- (_Bool)hasSuperModalAlertItems;
- (id)currentAlertItem;
- (id)dequeueAllPendingSuperModalAlertItems;
- (void)deactivateAlertItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)activateAlertItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)wantsToHandleAlert:(id)arg1;
- (_Bool)hasAlertItem:(id)arg1;
- (_Bool)canHandleAlerts;
- (_Bool)handleExternalKeyDownEvent;
- (void)noteResetRestoreStateUpdated;
- (void)noteDeviceBlockedStatusUpdated;
- (_Bool)wantsLockScreenIdleTimer;
- (_Bool)isLockScreenVisible;
- (_Bool)isShowingOverheatUI;
- (_Bool)isSystemGesturePermittedForPresentingController:(id)arg1;
- (void)shakeSlideToUnlockTextWithCustomText:(id)arg1;
- (void)updateInterfaceIfNecessary;
- (void)setShowingMediaControls:(_Bool)arg1;
- (_Bool)isShowingMediaControls;
- (void)updateOrientationForUndim;
- (void)setCustomLockScreenActionContext:(id)arg1;
- (id)_customLockScreenActionContext;
- (id)currentLockScreenActionContext;
- (void)noteModalBannerIsVisible:(_Bool)arg1;
- (_Bool)lockScreenIsShowingBulletins;
- (_Bool)shouldShowStatusBarOnDeactivation;
- (_Bool)shouldShowLockStatusBarTime;
- (_Bool)shouldDisableALS;
- (_Bool)shouldShowSlideshowButton;
- (_Bool)handleMenuButtonHeld;
- (_Bool)handleMenuButtonTap;
- (void)noteExitingLostMode;
- (void)prepareToEnterLostMode;
- (void)_handlePassKitDismissal;
- (void)_handlePassKitPresentation;
- (void)updateCardItem:(id)arg1;
- (void)deactivateCardItem:(id)arg1;
- (void)activateCardItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)allowAnimatedDismissalForLockScreenPlugin;
- (void)updateCustomSubtitleTextForAwayViewPlugin:(id)arg1;
- (void)adjustLockScreenContentByOffset:(double)arg1 forPluginController:(id)arg2 withAnimationDuration:(double)arg3;
- (struct CGRect)defaultContentRegionForPluginController:(id)arg1 withOrientation:(long long)arg2;
- (void)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2 auxiliaryDeactivationAnimationBlock:(id)arg3;
- (void)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2 auxiliaryActivationAnimationBlock:(id)arg3;
- (void)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2;
- (void)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2;
- (id)activeLockScreenPluginController;
- (_Bool)isLockScreenPluginViewVisible;
- (_Bool)hasActiveUIAccessories;
- (void)setInScreenOffMode:(_Bool)arg1 forAutoUnlock:(_Bool)arg2;
- (void)setInScreenOffMode:(_Bool)arg1;
- (_Bool)isInScreenOffMode;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (_Bool)canRelockForAutoDimTimer;
- (_Bool)wantsScreenToAutoDim;
- (void)prepareForMesaUnlockWithCompletion:(id)arg1;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned long long)arg2;
- (void)noteNextUnlockShouldReturnToCallIfPossible:(_Bool)arg1;
- (_Bool)isHidingPasscodeViewDuringCall;
- (void)setForcesPasscodeViewDuringCall:(_Bool)arg1;
- (void)noteStartingPhoneCallWhileUILocked;
- (_Bool)isMakingEmergencyCall;
- (void)emergencyDialerExitedWithError:(id)arg1;
- (void)exitEmergencyDialerAnimated:(_Bool)arg1;
- (void)launchEmergencyDialer;
- (void)activateCameraAnimated:(_Bool)arg1;
- (void)activateCamera;
- (void)willBeginDeactivationForTransitionToApps:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_isLockAlert;
- (void)prepareForExternalUIUnlock;
- (void)deactivate;
- (void)activate;
- (_Bool)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
- (void)finishUIUnlockFromSource:(int)arg1;
- (void)attemptToUnlockUIFromNotification;
- (_Bool)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (_Bool)canBeUIUnlocked;
- (void)prepareForUIUnlock;
- (_Bool)requiresPasscodeInputForUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (_Bool)isPasscodeLockVisible;
- (void)setPasscodeLockVisible:(_Bool)arg1 animated:(_Bool)arg2 withUnlockSource:(int)arg3 andOptions:(id)arg4;
- (void)setPasscodeLockVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)setPasscodeLockVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateLegibility;
- (_Bool)allowSystemGestureAtLocation:(struct CGPoint)arg1;
- (void)_transitionWallpaperFromLockWithOptionalOutTimingFunction:(id)arg1 adjustWindowLevel:(_Bool)arg2 completionHandler:(id)arg3;
- (void)_transitionWallpaperFromLock;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

