
#import "NSObject.h"

@class SBFWallpaperView;

@protocol SBFWallpaperViewInternalObserver <NSObject>
- (void)wallpaperViewDidChangeWantsRasterization:(SBFWallpaperView *)arg1;
- (void)wallpaperView:(SBFWallpaperView *)arg1 didChangeZoomFactor:(double)arg2;
- (void)wallpaperViewDidInvalidateGeometry:(SBFWallpaperView *)arg1;
- (void)wallpaperViewDidInvalidateBlurs:(SBFWallpaperView *)arg1;
@end

