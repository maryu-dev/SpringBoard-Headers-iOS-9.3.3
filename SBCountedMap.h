
#import "NSObject.h"

@class NSCountedSet, NSMutableDictionary;

@interface SBCountedMap : NSObject
{
    NSCountedSet *_countedKeys;
    NSMutableDictionary *_map;
}

- (void)checkinValues:(id)arg1;
- (void)checkinValue:(id)arg1;
- (id)checkoutValueForKey:(id)arg1 creationBlock:(id)arg2;
- (id)init;

@end

