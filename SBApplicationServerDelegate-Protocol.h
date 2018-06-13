
#import "NSObject.h"

@class NSArray, NSString, SBApplicationServer;

@protocol SBApplicationServerDelegate <NSObject>
- (void)applicationServer:(SBApplicationServer *)arg1 setDynamicShortcutItems:(NSArray *)arg2 forBundleIdentifier:(NSString *)arg3;
- (void)applicationServer:(SBApplicationServer *)arg1 fetchDynamicShortcutItemsForBundleIdentifier:(NSString *)arg2 withCompletion:(void (^)(NSArray *))arg3;
- (void)applicationServer:(SBApplicationServer *)arg1 setRemovalAllowed:(_Bool)arg2 forBundleIdentifier:(NSString *)arg3;
- (void)applicationServer:(SBApplicationServer *)arg1 fetchRemovabilityForBundleIdentifier:(NSString *)arg2 withCompletion:(void (^)(long long))arg3;
- (void)applicationServer:(SBApplicationServer *)arg1 fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)arg2 withCompletion:(void (^)(long long))arg3;
@end

