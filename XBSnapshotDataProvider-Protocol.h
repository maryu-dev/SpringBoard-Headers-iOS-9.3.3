
#import "NSObject.h"

@class NSData, UIImage, XBSnapshotDataProviderContext;

@protocol XBSnapshotDataProvider <NSObject>
@property(readonly, retain, nonatomic) XBSnapshotDataProviderContext *context;

@optional
- (UIImage *)fetchImage;
- (NSData *)fetchImageData:(out struct CGAffineTransform *)arg1;
@end

