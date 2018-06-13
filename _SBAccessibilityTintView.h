
#import "UIView.h"

#import "SBWallpaperObserver.h"
#import "_SBFakeBlur.h"

@class NSString;

@interface _SBAccessibilityTintView : UIView <_SBFakeBlur, SBWallpaperObserver>
{
    long long _variant;
    _Bool _fullscreen;
    id <_SBFakeBlurObserver> _observer;
}

- (void)_updateBackgroundColor;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (long long)effectiveStyle;
- (void)requestStyle:(long long)arg1;
- (void)dealloc;
- (id)initWithVariant:(long long)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

