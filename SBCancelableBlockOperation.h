
#import "NSOperation.h"

@class NSMutableArray;

@interface SBCancelableBlockOperation : NSOperation
{
    NSMutableArray *_blocks;
}

- (void)main;
- (void)addBlock:(id)arg1;
- (id)init;

@end

