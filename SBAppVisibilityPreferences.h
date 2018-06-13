
#import "NSObject.h"

@class NSString;

@interface SBAppVisibilityPreferences : NSObject
{
    NSString *_bundleID;
    _Bool _defaultVisible;
    _Bool _currentlyVisible;
}

- (_Bool)update;
- (id)description;
- (id)initWithDefaultVisible:(_Bool)arg1 bundleID:(id)arg2;

@end

