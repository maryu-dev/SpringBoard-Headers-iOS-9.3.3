
#import "NSObject.h"

@class UIView;

@interface SBViewSnapshotProvider : NSObject
{
    UIView *_view;
    id _completionBlock;
}

- (void)snapshotAsynchronously:(_Bool)arg1 withImageBlock:(id)arg2;
- (void)snapshotWithImageBlock:(id)arg1;
- (id)snapshot;
- (id)initWithView:(id)arg1;

@end

