
#import "NSObject.h"

@class SBSwitcherSnapshotImageView, XBApplicationSnapshot;

@interface _SBAppSwitcherSnapshotContext : NSObject
{
    XBApplicationSnapshot *_snapshot;
    SBSwitcherSnapshotImageView *_snapshotImageView;
    struct CGRect _snapshotReferenceFrame;
}


@end

