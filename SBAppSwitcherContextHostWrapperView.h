
#import "UIView.h"

#import "SBMainAppSwitcherPageContentView.h"

@class FBWindowContextHostManager, NSString, SBWallpaperEffectView, UIView<FBSceneHostView>;

@interface SBAppSwitcherContextHostWrapperView : UIView <SBMainAppSwitcherPageContentView>
{
    FBWindowContextHostManager *_contextHostManager;
    UIView *_containerView;
    UIView<FBSceneHostView> *_contextHostView;
    UIView *_snapshotView;
    SBWallpaperEffectView *_wallpaperEffectView;
    long long _orientation;
}

- (void)_viewDidAnimatePresentation:(id)arg1;
- (void)_viewDidAnimateDismissal:(id)arg1;
- (void)_viewDismissing:(id)arg1;
- (void)_viewPresenting:(id)arg1;
- (void)_viewWillPresent:(id)arg1;
- (struct CGAffineTransform)_rotationTransformForOrientation:(long long)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didMoveToSuperview;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 application:(id)arg2 sideApplication:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

