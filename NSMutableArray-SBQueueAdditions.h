
#import "NSMutableArray.h"

@interface NSMutableArray (SBQueueAdditions)
- (id)_sb_peek;
- (id)_sb_dequeue;
- (void)_sb_enqueue:(id)arg1;
@end

