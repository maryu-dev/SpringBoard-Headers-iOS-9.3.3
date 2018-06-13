
#import "SBSwitcherWallpaperPageContentView.h"

@class SBAppSwitcherSettings, SBOrientationTransformWrapperView, SBWindowSelfHostWrapper, UIView;

@interface SBSwitcherMetahostingHomePageContentView : SBSwitcherWallpaperPageContentView
{
    SBOrientationTransformWrapperView *_portraitContentWrapper;
    SBOrientationTransformWrapperView *_rotatingContentWrapper;
    UIView *_darkeningView;
    SBWindowSelfHostWrapper *_iconsWindowHostWrapper;
    UIView *_snapshotView;
    SBWindowSelfHostWrapper *_statusBarWindowHostWrapper;
    UIView *_fakeStatusBar;
    SBAppSwitcherSettings *_settings;
    _Bool _presenting;
    _Bool _interactive;
}

+ (_Bool)_usesSnapshots;
- (double)_darkeningFactor;
- (long long)_targetWallpaperStyle;
- (void)_transitionWallpaperWithProgress:(double)arg1 presenting:(_Bool)arg2;
- (void)_createFakeStatusBar;
- (void)_removeSnapshotIfNecessary;
- (void)_substituteSnapshotIfNecessary;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)interactionDidEnd:(_Bool)arg1;
- (void)updateTransitionProgress:(double)arg1;
- (void)transitionDidEnd:(_Bool)arg1 forPresentation:(_Bool)arg2;
- (void)viewDismissing:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)viewPresenting:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

