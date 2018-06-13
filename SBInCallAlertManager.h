
#import "NSObject.h"

@class SBRemoteAlertAdapter;

@interface SBInCallAlertManager : NSObject
{
    SBRemoteAlertAdapter *_currentActiveInCallAlert;
    _Bool _endingCallForLockButtonPress;
}

+ (id)sharedInstance;
- (void)maybeLockUIAfterCallEnded;
- (void)reactivateAlertForActivityContinuationWithActivityIdentifier:(id)arg1;
- (void)reactivateAlertForLockButtonPress;
- (void)reactivateAlertFromLockScreenWithUIUnlock:(_Bool)arg1 disableAnimatedTransition:(_Bool)arg2;
- (void)reactivateAlertFromStatusBarTap;
- (id)init;

@end

