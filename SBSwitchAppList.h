
#import "NSObject.h"

@class NSArray;

@interface SBSwitchAppList : NSObject
{
    NSArray *_list;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_resetList;
- (id)_findApplicationInDirection:(unsigned long long)arg1 startLookingAtIndex:(unsigned long long)arg2;
- (_Bool)_bundleIDShouldBeRepresentedInList:(id)arg1;
- (void)resetList;
- (_Bool)containsBundleID:(id)arg1;
- (id)applicationBundleIDBeforeBundleID:(id)arg1;
- (id)applicationBundleIDAfterBundleID:(id)arg1;
- (id)description;
- (id)init;

@end

