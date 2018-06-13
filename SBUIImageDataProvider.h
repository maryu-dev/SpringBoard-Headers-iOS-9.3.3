
#import "NSObject.h"

#import "XBSnapshotDataProvider.h"

@class NSString, SBSnapshotDataProviderContext, UIImage, XBSnapshotDataProviderContext;

@interface SBUIImageDataProvider : NSObject <XBSnapshotDataProvider>
{
    UIImage *_image;
    SBSnapshotDataProviderContext *_context;
    double _scaleFactor;
}

- (id)fetchImage;
- (id)initWithImage:(id)arg1 context:(id)arg2 scaleFactor:(double)arg3;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

