
#import "SBLayoutState.h"

#import "SBMainDisplayLayoutContext.h"

@class NSString, SBBreadcrumbState, SBMainDisplaySceneManager, SBMainWorkspace, SBSideAppState;

@interface SBMainDisplayLayoutState : SBLayoutState <SBMainDisplayLayoutContext>
{
    SBMainDisplaySceneManager *_sceneManager;
    SBMainWorkspace *_workspace;
    SBSideAppState *_sideAppState;
    SBSideAppState *_externallyManagedSideAppState;
    SBBreadcrumbState *_breadcrumbState;
}

+ (long long)_defaultOrientation;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)includesStatusBarForLayoutRole:(long long)arg1;
- (long long)wallpaperModeForLayoutRole:(long long)arg1;
- (long long)wallpaperMode;
@property(readonly, nonatomic) long long externallyManagedSideAppWidth;
@property(readonly, nonatomic) long long externallyManagedSideAppPresentationStyle;
@property(readonly, nonatomic) long long sideAppWidth;
@property(readonly, nonatomic) long long sideAppPresentationStyle;
- (id)_layoutStateForTransitionContext:(id)arg1;
- (_Bool)isEqualToLayoutState:(id)arg1;
- (id)_stateWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(long long)arg5;
- (id)_initWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(long long)arg5 sceneManager:(id)arg6 workspace:(id)arg7;
- (id)_initWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(long long)arg5;
- (id)_initWithElements:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long interfaceOrientation;
@property(readonly) Class superclass;

@end

