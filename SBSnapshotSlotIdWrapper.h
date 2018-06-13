
#import "NSObject.h"

@class CAContext;

@interface SBSnapshotSlotIdWrapper : NSObject
{
    unsigned int _slotId;
    CAContext *_context;
}

- (void)dealloc;
- (id)init;
- (id)initWithContext:(id)arg1 slotId:(unsigned int)arg2;

@end

