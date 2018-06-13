
#import "UIView.h"

#import "SBWallpaperObserver.h"

@class NSString, SBDockIconListView, SBHighlightView, SBWallpaperEffectView, UIImageView, _UILegibilitySettings;

@interface SBDockView : UIView <SBWallpaperObserver>
{
    SBDockIconListView *_iconListView;
    SBHighlightView *_highlightView;
    SBWallpaperEffectView *_backgroundView;
    UIImageView *_backgroundImageView;
    UIView *_accessibilityBackgroundView;
    _Bool _forSnapshot;
    _UILegibilitySettings *_legibilitySettings;
    unsigned long long _dockEdge;
}

+ (double)defaultHeight;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
- (id)_newBackgroundImage;
- (void)setVerticalBackgroundStretch:(double)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)layoutSubviews;
- (id)dockListView;
- (void)dealloc;
- (id)initWithDockListView:(id)arg1 forSnapshot:(_Bool)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

