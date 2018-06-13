
#import "NSObject.h"

#import "_UISettingsKeyObserver.h"

@class NSMutableDictionary, NSString, SBLockScreenPlugin, SBLockScreenPluginLoader, SBLockScreenPluginTransitionFactory, SBLockScreenTestPluginSettings, SBLockScreenViewController, UIWindow;

@interface SBLockScreenPluginController : NSObject <_UISettingsKeyObserver>
{
    SBLockScreenPluginLoader *_pluginLoader;
    NSMutableDictionary *_plugins;
    SBLockScreenPlugin *_activePlugin;
    SBLockScreenPlugin *_displayedPlugin;
    SBLockScreenPluginTransitionFactory *_transitionFactory;
    id <SBLockScreenPluginControllerDelegate> _delegate;
    SBLockScreenViewController *_lockScreenViewController;
    _Bool _pluginControllerReceivedViewWillDisappear;
    _Bool _pluginControllerReceivedViewDidDisappear;
    UIWindow *_previousWindow;
    _Bool _removedDisplayedPluginTemporarily;
    SBLockScreenTestPluginSettings *_testSettings;
    _Bool _lockScreenHasNotifications;
    _Bool _allowDisplayOfPlugins;
    double _fadeDuration;
}

- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_passcodeLockedStateChanged:(id)arg1;
- (_Bool)_pluginHidesNotificationList:(id)arg1;
- (void)_updateNotificationListForNewlyActivatedPlugin;
- (void)_transitionFromNotificationListToExclusionaryPlugin;
- (void)_transitionFromExclusionaryPluginToNotificationList;
- (void)_notifyDisplayedPluginRemovedFromWindow;
- (void)_notifyDisplayedPluginAddedToWindow;
- (void)_lockScreenDidMoveToWindow;
- (void)_lockScreenWillMoveToWindow;
- (void)_disablePluginsPassingTest:(id)arg1 withReason:(id)arg2;
- (void)_removeActivePlugin;
- (void)_removeDisplayedPluginPermanently:(_Bool)arg1;
- (void)_handleUIRelock;
- (void)handleLockScreenTemporarilyDismissed;
- (void)handleUIUnlock;
- (id)_pluginForName:(id)arg1 controller:(id)arg2;
- (_Bool)_loadLockScreenPluginWithName:(id)arg1 activationContext:(id)arg2;
- (void)_handleApplicationExit:(id)arg1;
- (_Bool)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2 auxiliaryDeactivationAnimationBlock:(id)arg3;
- (void)_handlePluginDisable:(id)arg1;
- (void)_handleUpdatePluginLegibilitySettings:(id)arg1;
- (id)_transitionContextWithOldPlugin:(id)arg1 newPlugin:(id)arg2;
- (void)_updateCallPluginPresentationStyle;
- (void)_setEffectivePresentationStyleForDisplayedPluginIfNecessary;
- (void)_setDisplayedPlugin:(id)arg1;
- (void)_setActivePlugin:(id)arg1;
- (_Bool)isPhonePluginVisible;
- (_Bool)isPhonePluginActive;
- (void)_refreshLockScreenPlugin;
- (void)reset;
- (_Bool)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2 auxiliaryActivationAnimationBlock:(id)arg3;
- (id)_pluginView;
- (id)_lockScreenView;
- (_Bool)handleHeadsetButtonPressed:(_Bool)arg1;
- (_Bool)handleVolumeDownButtonPressed;
- (_Bool)handleVolumeUpButtonPressed;
- (_Bool)handleLockButtonPressed;
- (_Bool)handleMenuButtonHeld;
- (_Bool)wantsMenuButtonHeldEvent;
- (_Bool)handleMenuButtonDoubleTap;
- (_Bool)handleMenuButtonTap;
- (_Bool)sendEventToPlugin:(id)arg1;
- (id)_highestPriorityPluginIgnoringViewDisplay:(_Bool)arg1;
- (_Bool)pluginControllerShouldAnimateOthersResumption;
- (struct CGRect)defaultContentRegionForPluginController:(id)arg1 withOrientation:(long long)arg2;
- (_Bool)activePluginHidesNotificationList;
- (id)activePluginBundleName;
- (id)displayedPlugin;
- (id)activePlugin;
- (_Bool)isPluginVisible;
- (void)dealloc;
- (void)_addObservers;
- (id)initWithLockScreenViewController:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

