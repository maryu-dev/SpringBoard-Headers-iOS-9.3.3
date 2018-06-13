
#import "UIView.h"

#import "SBMainAppSwitcherPageContentView.h"

@class NSString, SBAppSwitcherStatusBarViewCache, SBWallpaperEffectView, SBZoomView, UIView<SBAppSwitcherCacheVended>;

@interface SBAppSwitcherContinuityAppView : UIView <SBMainAppSwitcherPageContentView>
{
    UIView *_containerView;
    SBWallpaperEffectView *_wallpaperView;
    UIView<SBAppSwitcherCacheVended> *_fakeStatusBarView;
    SBAppSwitcherStatusBarViewCache *_statusBarCache;
    NSString *_bundleIdentifier;
    SBZoomView *_zoomView;
    long long _orientation;
}

- (void)_viewDismissing:(id)arg1;
- (void)_willAnimateDismiss:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct CGAffineTransform)_rotationTransformForOrientation:(long long)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 bundleIdentifier:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

