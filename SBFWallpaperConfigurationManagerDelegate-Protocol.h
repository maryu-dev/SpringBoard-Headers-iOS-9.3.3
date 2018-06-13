
#import "NSObject.h"

@class SBFWallpaperConfigurationManager;

@protocol SBFWallpaperConfigurationManagerDelegate <NSObject>
- (void)wallpaperConfigurationManager:(SBFWallpaperConfigurationManager *)arg1 didChangeWallpaperConfigurationForVariants:(long long)arg2;

@optional
- (_Bool)wallpaperConfigurationManager:(SBFWallpaperConfigurationManager *)arg1 isVideoSupportedForVariant:(long long)arg2;
@end

