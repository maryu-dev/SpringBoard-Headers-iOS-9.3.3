
#import "NSObject.h"

@class NSMutableSet, SBBulletinRootViewController, UIViewController, UIWindow;

@interface SBBulletinWindowController : NSObject
{
    UIWindow *_bulletinWindow;
    _Bool _rotatingKeyboard;
    _Bool _aboveAssistant;
    NSMutableSet *_windowClients;
    NSMutableSet *_keyClients;
    NSMutableSet *_busyClients;
    NSMutableSet *_busyReasons;
    SBBulletinRootViewController *_rootVC;
    _Bool _wantsKeyWindow;
}

+ (_Bool)shouldSuppressAlertForBulletin:(id)arg1;
+ (_Bool)_isSecure;
+ (id)sharedInstance;
- (_Bool)_hasKeyWindowClients;
- (void)updateKeyWindowStatusIfNecessary;
- (void)removeBusyClient:(id)arg1;
- (void)addBusyClient:(id)arg1;
- (void)removeWindowClient:(id)arg1;
- (void)removeWindowClient:(id)arg1 withChildViewController:(id)arg2;
- (void)addWindowClient:(id)arg1 withChildViewController:(id)arg2;
- (void)addWindowClient:(id)arg1;
- (void)_didResignKeyWindow:(id)arg1;
- (void)_didBecomeKeyWindow:(id)arg1;
- (void)_resignAsKeyWindow;
- (void)_becomeKeyWindow;
- (_Bool)allowsDismissBannerGesture;
- (_Bool)allowsHideNotificationsGesture;
- (_Bool)allowsShowNotificationsSystemGesture;
- (_Bool)allowsShowNotificationsGesture;
- (_Bool)allowsShowNotificationsSystemGestureFromBanner;
- (_Bool)_allowsShowNotificationsSystemGestureFromBanner:(_Bool)arg1;
- (_Bool)_allowsShowNotificationsGestureFromBanner:(_Bool)arg1;
- (_Bool)_isBusyForReason:(id)arg1;
- (_Bool)isBusy;
- (void)setBusy:(_Bool)arg1 forReason:(id)arg2;
- (void)dealloc;
- (id)init;

@end

