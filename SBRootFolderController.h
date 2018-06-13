
#import "SBFolderController.h"

#import "SBRootFolderDelegate.h"

@class NSString, SBRootFolder, SBRootFolderView, UIWindow;

@interface SBRootFolderController : SBFolderController <SBRootFolderDelegate>
{
    _Bool _managesStatusBarWidth;
    UIWindow *_dockAnimationWindow;
}

+ (Class)listViewClass;
- (_Bool)rootFolder:(id)arg1 shouldAllowBadgingForIcon:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (struct UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1;
- (void)_configureAppStatusBarInsetsForOrientation:(long long)arg1;
- (void)_configureAppStatusBarInsets;
- (void)_configureAppStatusBarInsetsAnimated:(_Bool)arg1;
- (void)_configureViewForOrientationWithoutAnimation:(long long)arg1;
- (void)_configureDockViewForOrientationWithoutAnimation:(long long)arg1;
- (void)_configureDockViewForOrientationDuringAnimation:(long long)arg1;
- (_Bool)_dockLayoutReversedForInterfaceOrientation:(long long)arg1;
- (unsigned long long)_dockEdgeForInterfaceOrientation:(long long)arg1;
- (_Bool)_shouldUseDockAnimationWindowForRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)_shouldSlideDockOutDuringRotationFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (_Bool)_isDockSwitchedForOrientation:(long long)arg1;
- (void)prepareToClose;
- (void)prepareToOpen;
- (void)addAdditionalInnerFolderAnimations;
- (_Bool)popFolderAnimated:(_Bool)arg1 completion:(id)arg2;
- (_Bool)pushFolder:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (_Bool)_listIndexIsVisible:(unsigned long long)arg1;
- (struct CGRect)_autoscrollExclusionRegion;
@property(nonatomic) unsigned long long dockEdge;
- (void)setDockVerticalStretch:(double)arg1;
- (void)setDockOffscreenFraction:(double)arg1;
- (id)dockListView;
- (_Bool)isDisplayingIcon:(id)arg1;
- (void)setIdleText:(id)arg1;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)folderControllers;
- (unsigned long long)_depth;
- (Class)_contentViewClass;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

