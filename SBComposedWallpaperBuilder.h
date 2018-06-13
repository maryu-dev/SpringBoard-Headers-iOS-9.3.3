
#import "NSObject.h"

@class SBFFileCache;

@interface SBComposedWallpaperBuilder : NSObject
{
    SBFFileCache *_fileCache;
}

- (id)drawImageLayer:(id)arg1 inBounds:(struct CGRect)arg2 assets:(id)arg3;
- (id)drawColorLayer:(id)arg1 inBounds:(struct CGRect)arg2;
- (void)buildWallpaperOfSize:(struct CGSize)arg1 fromSpecification:(id)arg2 assets:(id)arg3 completionHandler:(id)arg4;
- (void)buildWallpaperOfSize:(struct CGSize)arg1 fromSpecification:(id)arg2 completionHandler:(id)arg3;
- (void)buildWallpaperFromSpecification:(id)arg1 completionHandler:(id)arg2;
- (id)init;
- (id)initWithAssetCache:(id)arg1;

@end

