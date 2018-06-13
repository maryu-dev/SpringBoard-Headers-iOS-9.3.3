
#import "NSObject.h"

#import "SBWallpaperObserver.h"
#import "_UISettingsKeyObserver.h"

@class NSHashTable, NSString, SBIconColorSettings;

@interface _SBIconWallpaperBackgroundProvider : NSObject <_UISettingsKeyObserver, SBWallpaperObserver>
{
    SBIconColorSettings *_colorSettings;
    NSHashTable *_clients;
    struct CGImage *_blurImage;
    struct CGColor *_solidColor;
}

+ (id)sharedInstance;
- (void)_updateBackgrounds;
- (void)_updateBlurForClient:(id)arg1;
- (void)_updateClient:(id)arg1;
- (void)_updateAllClients;
- (void)wallpaperGeometryDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)noteClientWallpaperRelativeBoundsDidChange:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

