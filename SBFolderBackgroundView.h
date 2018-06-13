
#import "UIView.h"

#import "SBWallpaperObserver.h"
#import "_UISettingsKeyObserver.h"

@class NSString, SBFolderSettings, SBWallpaperEffectView, UIImageView, _UILegibilitySettings;

@interface SBFolderBackgroundView : UIView <_UISettingsKeyObserver, SBWallpaperObserver>
{
    SBWallpaperEffectView *_backdropView;
    UIImageView *_backgroundImageView;
    UIView *_accessibilityBackgroundView;
    SBFolderSettings *_folderSettings;
    _UILegibilitySettings *_legibilitySettings;
}

+ (double)cornerRadiusToInsetContent;
+ (struct CGSize)folderBackgroundSize;
+ (void)warmupIfNecessary;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_updateBackgroundImageView;
- (_Bool)_shouldUseDarkBackground;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_configureAccessibilityBackground;
- (void)adjustCornerRadiusForMagnificationFraction:(double)arg1;
- (void)didAnimate;
- (void)willAnimate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

