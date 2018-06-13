
#import "NSObject.h"

@interface SBWallpaperAggdLogger : NSObject
{
    long long _aggd_lockscreenWallpaperType;
    long long _aggd_lockscreenWallpaperIdentifier;
    long long _aggd_homescreenWallpaperType;
    long long _aggd_homescreenWallpaperIdentifier;
    long long _aggd_irisWallpaperEnabled;
    long long _aggd_sharedWallpaper;
}

- (id)_valueString;
- (void)_clearAggdKeysForLocations:(long long)arg1;
- (void)saveWallpaperAggdCurrentValues;
- (void)updateWallpaperAggdKeysForLocations:(long long)arg1 withHasVideo:(_Bool)arg2 hasProcedural:(_Bool)arg3 name:(id)arg4;
- (id)init;

@end

