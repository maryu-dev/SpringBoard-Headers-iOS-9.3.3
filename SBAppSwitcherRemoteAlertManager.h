
#import "NSObject.h"

@class SBAppSwitcherRemoteAlertSet;

@interface SBAppSwitcherRemoteAlertManager : NSObject
{
    SBAppSwitcherRemoteAlertSet *_remoteAlerts;
}

+ (id)sharedInstance;
- (id)currentRemoteAlerts;
- (void)removePlaceholderForIdentifier:(id)arg1;
- (void)addPlaceholderForIdentifier:(id)arg1;
- (void)removeRemoteAlert:(id)arg1;
- (void)addRemoteAlert:(id)arg1;

@end

