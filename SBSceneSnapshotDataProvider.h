
#import "NSObject.h"

#import "XBSnapshotDataProvider.h"

@class FBSceneSnapshot, NSString, SBSnapshotDataProviderContext, UIImage, XBSnapshotDataProviderContext;

@interface SBSceneSnapshotDataProvider : NSObject <XBSnapshotDataProvider>
{
    FBSceneSnapshot *_snapshot;
    SBSnapshotDataProviderContext *_context;
    double _scaleFactor;
    UIImage *_cachedImage;
    struct __IOSurface *_processedSurface;
}

- (void)_invalidateSnapshotData;
- (id)fetchImage;
- (struct __IOSurface *)IOSurface;
- (void)dealloc;
- (id)initWithSceneSnapshot:(id)arg1 scaleFactor:(double)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

