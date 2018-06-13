
#import "NSObject.h"

@class NSMutableDictionary;

@interface SBMiniAlertController : NSObject
{
    NSMutableDictionary *_identifierToPresenters;
    unsigned int _sbMiniAlertVisible:1;
}

+ (id)sharedInstance;
- (_Bool)canShowAlerts;
- (_Bool)miniAlertVisible;
- (void)_setAlertVisibleNotifyState:(_Bool)arg1 withFence:(_Bool)arg2;
- (void)noteMiniAlertStateChanged;
- (void)hideApplicationMiniAlerts;
- (void)_hideMiniAlertsForApp:(id)arg1 withTransition:(id)arg2;
- (void)_showApplicationMiniAlertsIfNeededAndFence:(_Bool)arg1;
- (void)showApplicationMiniAlertsIfNeeded;
- (void)displayDidDismissMiniAlert:(id)arg1;
- (void)displayWillDismissMiniAlert:(id)arg1;
- (void)displayWillShowMiniAlert:(id)arg1;
- (_Bool)_applicationIsShowingAlert:(id)arg1;
- (void)_removeApplicationShowingAlert:(id)arg1;
- (void)_addApplicationShowingAlert:(id)arg1;
- (void)deactivateAlertItemsForDisplay:(id)arg1;
- (id)init;

@end

