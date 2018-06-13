
#import "SBAlert.h"

@class NSTimer;

@interface SBUSSDAlert : SBAlert
{
    unsigned int _receivedString:1;
    unsigned int _dismissOnActivate:1;
    NSTimer *_delayedDismissTimer;
}

+ (void)_newSIM:(id)arg1;
+ (void)_daemonRestart:(id)arg1;
+ (id)errorStringForCode:(id)arg1;
+ (void)test;
+ (void)registerForAlerts;
+ (void)registerForSettingsAlerts;
- (long long)statusBarStyle;
- (void)deactivate;
- (void)activate;
- (void)_delayedDismiss;
- (void)setDismissOnActivate:(_Bool)arg1;
- (_Bool)receivedString;
- (_Bool)sentResponse;
- (_Bool)allowsResponse;
- (void)USSDStringAvailable:(id)arg1 allowsResponse:(_Bool)arg2;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)dealloc;

@end

