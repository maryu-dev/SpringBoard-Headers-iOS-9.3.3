
#import "NSObject.h"

@class SBWallpaperServer;

@protocol SBWallpaperServerDelegate <NSObject>
- (void)wallpaperServer:(SBWallpaperServer *)arg1 fetchThumbnailDataForVariant:(long long)arg2 completionHandler:(void (^)(NSData *))arg3;
@end

