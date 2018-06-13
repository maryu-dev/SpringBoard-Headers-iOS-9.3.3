
#import "SBIconBadgeView.h"

#import "_UISettingsKeyObserver.h"

@class NSString, SBFParallaxSettings;

@interface SBIconParallaxBadgeView : SBIconBadgeView <_UISettingsKeyObserver>
{
    SBFParallaxSettings *_parallaxSettings;
}

- (void)_applyParallaxSettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

