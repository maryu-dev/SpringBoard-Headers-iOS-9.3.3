
#import "NSObject.h"

@class NSMapTable, NSMutableDictionary, SBLayoutElementViewController, SBMainDisplaySceneLayoutViewController;

@interface SBMainDisplaySceneLayoutResizeUIManager : NSObject
{
    NSMutableDictionary *_stateNotificationHandlers;
    NSMapTable *_createdPlaceholderViews;
    _Bool _delaysRecoilUntilAppsAreObscured;
    _Bool _waitingToObscureAppsDuringShowing;
    _Bool _recoilingLayout;
    _Bool _hidingSideSwitcherGrabber;
    id <SBMainDisplaySceneLayoutResizeUIManagerDelegate> _delegate;
    unsigned long long _affectedLayoutRoles;
    unsigned long long _state;
    SBMainDisplaySceneLayoutViewController *_mainLayoutViewController;
    SBLayoutElementViewController *_primaryLayoutElementController;
    SBLayoutElementViewController *_sideLayoutElementController;
    id _showingCompletionHandler;
}

- (id)_bestResizingPlaceholderViewForAppContainerViewController:(id)arg1;
- (void)_endHidingSideSwitcherGrabberWithAnimationFactory:(id)arg1 completionHandler:(id)arg2;
- (void)_beginHidingSideSwitcherGrabberWithAnimationFactory:(id)arg1 completionHandler:(id)arg2;
- (void)beginRecoilingWithAnimationFactory:(id)arg1;
- (void)_unrecoilWithFactory:(id)arg1;
- (void)_recoilWithFactory:(id)arg1;
- (void)setAffectedLayoutRoles:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setState:(unsigned long long)arg1 ifCurrentlyAtState:(unsigned long long)arg2;
- (void)_fireRemainingStateNotificationHandlers;
- (void)_fireStateNotificationHandlersForState:(unsigned long long)arg1;
- (void)addNotificationHandlerForState:(unsigned long long)arg1 usingBlock:(id)arg2;
- (void)dismissResizeUIWithAnimationFactory:(id)arg1 completionHandler:(id)arg2;
- (void)_willChangeDisplayModeOfAppController:(id)arg1 toDisplayMode:(long long)arg2;
- (void)_resetDisplayModeForElementController:(id)arg1 options:(unsigned long long)arg2 animationFactory:(id)arg3 completionHandler:(id)arg4;
- (void)_resetElementControllerDisplayModesWithAnimationFactory:(id)arg1 completionHandler:(id)arg2;
@property(readonly, nonatomic) _Bool canDismissResizeUI;
@property(readonly, nonatomic, getter=isDismissingResizeUI) _Bool dismissingResizeUI;
- (void)cancelWithAnimationFactory:(id)arg1;
- (void)obscureAppsDuringShowingWithAnimationFactory:(id)arg1;
- (void)showResizeUIWhileWaitingToObscureApps:(_Bool)arg1 animationFactory:(id)arg2 completionHandler:(id)arg3;
- (void)_performShowConstructedUIPhaseOfShowingResizeUIWithPrimaryPlaceholderView:(id)arg1 sidePlaceholderView:(id)arg2 factory:(id)arg3 completionHandler:(id)arg4;
- (void)_displayPlaceholderView:(id)arg1 inAppController:(id)arg2 options:(unsigned long long)arg3 factory:(id)arg4 completionHandler:(id)arg5;
- (void)_performBlurPhaseOfShowingResizeUIWithPrimaryPlaceholderView:(id)arg1 sidePlaceholderView:(id)arg2 completionHandler:(id)arg3;
- (void)_performPlaceholderViewConstructionPhaseOfShowingResizeUIWithCompletionHandler:(id)arg1;
- (void)_performAppSnapshotPhaseOfShowingResizeUIWithCompletionHandler:(id)arg1;
- (void)_performNextStepOfShowingResizeUIWithBlock:(id)arg1;
- (id)_resizingPlaceholderViewForAppViewController:(id)arg1;
- (void)_updateCachedSnapshotViewForAppViewController:(id)arg1 onQueue:(id)arg2 displayWhenReadyIfTrue:(id)arg3 displayOptions:(unsigned long long)arg4 completionHandler:(id)arg5;
- (void)_updateCachedSnapshotViewForAppViewController:(id)arg1 onQueue:(id)arg2 completionHandler:(id)arg3;
- (void)_updateCachedResizingPlaceholderAppIconViewForAppViewController:(id)arg1;
- (id)_resizingPlaceholderAppIconViewForAppViewController:(id)arg1;
@property(readonly, nonatomic, getter=isShowingResizeUIOrAlreadyVisible) _Bool showingResizeUIOrAlreadyVisible;
@property(readonly, nonatomic, getter=isShowingResizeUI) _Bool showingResizeUI;
- (_Bool)isResizeUIVisible;
- (id)sideAppContainerViewController;
- (id)primaryAppContainerViewController;
- (_Bool)affectsMultipleLayoutRoles;
- (id)description;
- (id)init;
- (id)initWithMainLayoutViewController:(id)arg1;

@end

