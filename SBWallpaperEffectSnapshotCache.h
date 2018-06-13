
#import "NSObject.h"

#import "SBWallpaperObserver.h"

@class NSMutableSet, NSString;

@interface SBWallpaperEffectSnapshotCache : NSObject <SBWallpaperObserver>
{
    NSMutableSet *_mappedImageKeys;
}

+ (id)sharedInstance;
- (void)wallpaperWillChangeForVariant:(long long)arg1;
- (id)snapshotForKey:(id)arg1 withGenerationBlockIfNecessary:(id)arg2;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

