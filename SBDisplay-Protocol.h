
#import "NSObject.h"
#import "SBDisplaySettings.h"

@class SBDisplaySettings, UIStatusBarStyleRequest;

@protocol SBDisplay <NSObject, SBDisplaySettings>
- (SBDisplaySettings *)copyDisplaySettings;
- (void)deactivate;
- (void)activate;
- (_Bool)suppressesControlCenter;
- (_Bool)suppressesNotificationCenter;
- (_Bool)suppressesBanners;
- (_Bool)allowsEventOnlySuspension;
- (UIStatusBarStyleRequest *)effectiveStatusBarStyleRequest;
- (UIStatusBarStyleRequest *)statusBarStyleRequest;
- (long long)starkStatusBarStyle;
- (long long)statusBarStyle;
@end

