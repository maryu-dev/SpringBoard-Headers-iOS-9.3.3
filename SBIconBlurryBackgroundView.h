
#import "UIView.h"

#import "_SBIconWallpaperBackgroundClient.h"

@class NSString;

@interface SBIconBlurryBackgroundView : UIView <_SBIconWallpaperBackgroundClient>
{
    struct CGRect _wallpaperRelativeBounds;
    _Bool _isBlurring;
    _Bool _suppressesExternalUpdates;
    id <SBIconBlurryBackgroundViewObserver> _observer;
    id _wantsBlurEvaluator;
    struct CGPoint _wallpaperRelativeCenter;
}

- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setBlurring:(_Bool)arg1;
- (void)setWallpaperBackgroundRect:(struct CGRect)arg1 forContents:(struct CGImage *)arg2 withFallbackColor:(struct CGColor *)arg3;
- (_Bool)wantsBlur:(id)arg1;
- (struct CGRect)wallpaperRelativeBounds;
- (void)didAddSubview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

