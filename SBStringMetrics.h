
#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSMutableArray;

@interface SBStringMetrics : NSObject <NSFastEnumeration>
{
    NSMutableArray *_fragments;
}

- (unsigned long long)countByEnumeratingWithState:(id *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)fragmentCount;
- (id)fragments;
- (void)addFragment:(id)arg1;
- (id)description;
- (id)init;

@end

