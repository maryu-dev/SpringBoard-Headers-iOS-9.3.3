
#import "UIView.h"

#import "SBMainAppSwitcherPageContentView.h"

@class NSString, SBOrientationTransformWrapperView, SBWallpaperEffectView;

@interface SBSwitcherWallpaperPageContentView : UIView <SBMainAppSwitcherPageContentView>
{
    long long _orientation;
    long long _desiredWallpaperOrientation;
    SBOrientationTransformWrapperView *_wallpaperWrapperView;
    SBWallpaperEffectView *_wallpaperEffectView;
    long long _wallpaperStyle;
    double _cornerRadius;
}

- (void)_updateWallpaperOrientation;
- (void)_updateCornerRadius;
- (void)viewDismissing:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)viewPresenting:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)layoutSubviews;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

