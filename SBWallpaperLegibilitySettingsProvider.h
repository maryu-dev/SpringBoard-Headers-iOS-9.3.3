
#import "NSObject.h"

#import "SBFLegibilitySettingsProvider.h"
#import "SBWallpaperObserver.h"

@class NSString, _UILegibilitySettings;

@interface SBWallpaperLegibilitySettingsProvider : NSObject <SBWallpaperObserver, SBFLegibilitySettingsProvider>
{
    long long _variant;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
}

- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void)dealloc;
- (id)initWithVariant:(long long)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

