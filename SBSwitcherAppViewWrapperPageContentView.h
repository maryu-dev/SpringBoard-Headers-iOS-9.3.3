
#import "SBSwitcherWallpaperPageContentView.h"

@class SBAppSwitcherSettings, SBAppView, SBDisplayItem, SBFakeStatusBarView, SBLayoutState, SBOrientationTransformWrapperView;

@interface SBSwitcherAppViewWrapperPageContentView : SBSwitcherWallpaperPageContentView
{
    SBAppView *_appView;
    SBOrientationTransformWrapperView *_appTransformView;
    SBDisplayItem *_displayItem;
    SBLayoutState *_layoutState;
    SBFakeStatusBarView *_fakeStatusBar;
    id <SBSwitcherAppViewWrapperPageContentViewDelegate> _delegate;
    SBAppSwitcherSettings *_settings;
    _Bool _presenting;
    _Bool _interactive;
    int _savedStatusBarStyleOverride;
}

- (void)_createStatusBarIfNeeded;
- (void)_updateBreadcrumbOverrides;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)interactionDidEnd:(_Bool)arg1;
- (void)viewDismissing:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)viewPresenting:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)prepareToBecomeVisibleIfNecessary;
- (void)_layoutFakeStatusBar;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;
- (void)invalidate;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 appView:(id)arg2 displayItem:(id)arg3 layoutState:(id)arg4 delegate:(id)arg5;

@end

