
#import "NSObject.h"

@class NSArray;

@interface SBFakeDuet : NSObject
{
    NSArray *_triggers;
    NSArray *_appsToLaunch;
    id _recommendationHandler;
}

+ (id)sharedInstance;
- (void)_frontDisplayChanged:(id)arg1;
- (void)_switcherRevealed:(id)arg1;
- (void)_wake:(id)arg1;
- (void)_handleTrigger:(id)arg1;
- (void)_refreshAppsToLaunch;
- (void)_refreshTriggers;
- (void)setAppLaunchRecommendationHandler:(id)arg1;
- (void)okToLaunch:(id)arg1 forReasons:(id)arg2 withHandler:(id)arg3;
- (id)init;

@end

