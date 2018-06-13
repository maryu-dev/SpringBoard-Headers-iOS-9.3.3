
#import "NSObject.h"

@class NSString;

@interface SBAppSwitcherService : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_viewServiceClassName;
}

+ (id)switcherServiceWithName:(id)arg1 viewServiceClassName:(id)arg2;

@end

