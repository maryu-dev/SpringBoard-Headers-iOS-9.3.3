
#import "NSObject.h"

@interface SBGameCenter : NSObject
{
}

+ (void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(id)arg2;
+ (_Bool)hasAuthenticatedAccount;
+ (void)_loadGameCenterIfNecessary;

@end

