
#import "UIView.h"

@class SBWallpaperEffectView, _UIBackdropView;

@interface SBAppResizingBlurContainerView : UIView
{
    SBWallpaperEffectView *_wallpaperEffectView;
    UIView *_appSnapshotView;
    _UIBackdropView *_blurView;
}

- (void)layoutSubviews;

@end

