
#import "NSOperation.h"

@class NSMutableArray, NSObject<OS_dispatch_group>, NSString;

@interface _SBSynchronizeOperation : NSOperation
{
    NSString *_humanReadableDescription;
    NSObject<OS_dispatch_group> *_operationGroup;
    NSMutableArray *_tasks;
}

- (void)main;
- (void)addTask:(id)arg1;
- (id)init;

@end

