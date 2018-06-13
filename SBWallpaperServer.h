
#import "FBSystemServiceFacility.h"

@interface SBWallpaperServer : FBSystemServiceFacility
{
    id <SBWallpaperServerDelegate> _delegate;
}

+ (id)sharedInstance;
- (void)_handleFetchThumbnailMessage:(id)arg1 fromClient:(id)arg2;
- (long long)_wallpaperVariantFromXPCDictionary:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (id)init;

@end

