
#import "SBSystemGestureWorkspaceTransaction.h"

#import "SBMainDisplaySceneLayoutResizeUIManagerDelegate.h"

@class FBUIApplicationSceneDeactivationAssertion, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSTimer, SBLayoutElementViewController, SBMainDisplaySceneLayoutResizeUIManager, SBMainDisplaySceneLayoutViewController, SBMainWorkspaceTransaction, SBWorkspaceTransitionRequest;

@interface SBAppResizeGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBMainDisplaySceneLayoutResizeUIManagerDelegate>
{
    NSMutableArray *_transactionCompletionBlocks;
    NSMutableArray *_finalActionCompletionBlocks;
    NSMutableDictionary *_cachedSnapshotViews;
    NSMutableDictionary *_cachedPlaceholderViews;
    double _previousSlideOffPercent;
    SBWorkspaceTransitionRequest *_suspendPrimaryApplicationWorkspaceTransitionRequest;
    SBWorkspaceTransitionRequest *_suspendSideApplicationWorkspaceTransitionRequest;
    _Bool _resizingSpeculatively;
    _Bool _hasResizedSpeculatively;
    _Bool _slidingOffOverlaySideApp;
    _Bool _finishingWithOverlaySideAppDismissal;
    _Bool _lastGestureWasFullResizeGesture;
    _Bool _performingFinalAction;
    SBMainDisplaySceneLayoutViewController *_layoutViewController;
    SBLayoutElementViewController *_primaryLayoutElementController;
    SBLayoutElementViewController *_sideLayoutElementController;
    FBUIApplicationSceneDeactivationAssertion *_appDeactivationAssertion;
    SBMainDisplaySceneLayoutResizeUIManager *_resizeUIManager;
    unsigned long long _lastResizeGestureRegion;
    SBMainWorkspaceTransaction *_currentWorkspaceTransaction;
    NSDate *_currentWorkspaceTransactionStartDate;
    NSTimer *_longPressPinTimer;
    NSTimer *_pinUnpinTapTimer;
    unsigned long long _pendingFinalActionCount;
    unsigned long long _currentGestureIdentifier;
}

+ (double)_rubberbandingStartScreenEdgeMargin;
+ (id)resizeGestureZoomAnimationFactory;
+ (id)resizeGestureZoomAnimationSettings;
- (void)resizeUIManager:(id)arg1 willChangeToState:(unsigned long long)arg2;
- (void)resizeUIManager:(id)arg1 willChangeDisplayModeOfAppController:(id)arg2 toDisplayMode:(long long)arg3;
- (id)resizeUIManager:(id)arg1 cachedResizingPlaceholderViewForLayoutElementViewController:(id)arg2;
- (void)resizeUIManager:(id)arg1 didCreateResizingPlacholderView:(id)arg2 forLayoutElementViewController:(id)arg3;
- (id)resizeUIManager:(id)arg1 cachedSceneSnapshotViewForLayoutElementViewController:(id)arg2;
- (void)resizeUIManager:(id)arg1 didCreateSceneSnapshotView:(id)arg2 forLayoutElementViewController:(id)arg3;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (void)_didInterruptWithReason:(id)arg1;
- (_Bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (id)_workspaceTransitionRequestForCurrentLayoutStateWithSuspendingPrimaryApplication:(_Bool)arg1 suspendingSideApplication:(_Bool)arg2;
- (void)_tellElementViewsWeEndedResize;
- (void)_tellElementViewsWeWillBeginResize;
- (void)_invalidateTimers;
- (void)_pinUnpinTapTimerDidFire:(id)arg1;
- (void)_longPressPinTimerDidFire:(id)arg1;
- (void)_performWhenCurrentFinalActionCompletesUsingBlock:(id)arg1;
- (void)_performWhenCurrentWorkspaceTransactionCompletesUsingBlock:(id)arg1;
- (void)_addChildWorkspaceTransaction:(id)arg1;
- (void)_restartResizeUIWithGestureRecognizer:(id)arg1;
- (id)_transactionForExecutingApplicationTransitionContext:(id)arg1 eventLabel:(id)arg2;
- (struct CGRect)_appFrameForElementWithRole:(long long)arg1 inLayoutState:(id)arg2 withSideAppPresentationStyle:(long long)arg3 sideAppWidth:(long long)arg4 inCoordinateSpace:(id)arg5 withHeight:(double)arg6;
- (void)_animateElementViewsForFinalAction:(unsigned long long)arg1 animationFactory:(id)arg2 initialVelocity:(double)arg3 completionHandler:(id)arg4;
- (unsigned long long)_requiredResizeUIStateBeforeDismissingResizeUIForFinalAction:(unsigned long long)arg1;
- (unsigned long long)_requiredResizeUIStateBeforeAnimatingViewsForFinalAction:(unsigned long long)arg1;
- (unsigned long long)_affectedLayoutRolesForFinalAction:(unsigned long long)arg1;
- (_Bool)_shouldObscureAppsBeforePerformingFinalAction:(unsigned long long)arg1;
- (id)_transitionContextForFinalAction:(unsigned long long)arg1;
- (unsigned long long)_finalActionForGestureState:(long long)arg1 gestureRegion:(unsigned long long)arg2 distanceTraveled:(double)arg3 numberOfTouches:(unsigned long long)arg4;
- (void)_performFinalAction:(unsigned long long)arg1 velocity:(double)arg2 completionHandler:(id)arg3;
- (void)_resizeGestureFinishedWithState:(long long)arg1 gestureRegion:(unsigned long long)arg2 velocity:(double)arg3 distanceTraveled:(double)arg4 numberOfTouches:(unsigned long long)arg5;
- (void)_resizeGestureFinishedWithState:(long long)arg1 dividerPosition:(double)arg2 velocity:(double)arg3 absoluteDistanceTraveled:(double)arg4 directionalDistanceTraveled:(double)arg5 numberOfTouches:(unsigned long long)arg6;
- (void)_resizeGestureDidUpdate:(id)arg1;
- (void)_beginSpeculativeResizeIfAppropriate;
- (_Bool)_canTransitionIntoFullResizeWithLayoutState:(id)arg1;
- (void)_updateResizeUIFromGestureRecognizer:(id)arg1;
- (void)_updateSlideOffUIWithDistance:(double)arg1 gestureRecognizer:(id)arg2;
- (void)_updateSlideOffUIFromGestureRecognizer:(id)arg1;
- (void)_updateFullResizeUIFromGestureRecognizer:(id)arg1;
- (void)_getSideAppTransform:(struct CGAffineTransform *)arg1 forSideTranslationAmount:(double)arg2 sideScaleAmount:(double)arg3;
- (void)_getPrimaryAppTransform:(struct CGAffineTransform *)arg1 forPrimaryTranslationAmount:(double)arg2 primaryScaleAmount:(double)arg3;
- (void)_getPrimaryAppTransform:(struct CGAffineTransform *)arg1 sideAppTransform:(struct CGAffineTransform *)arg2 forPrimaryTranslationAmount:(double)arg3 primaryScaleAmount:(double)arg4 sideTranslationAmount:(double)arg5 sideScaleAmount:(double)arg6;
- (void)_getPrimaryAppTransform:(struct CGAffineTransform *)arg1 sideAppTransform:(struct CGAffineTransform *)arg2 grabberHorizontalOffset:(double *)arg3 forResizeGestureRegion:(unsigned long long)arg4 location:(double)arg5 allowRubberbanding:(_Bool)arg6;
- (void)_getPrimaryAppFrame:(struct CGRect *)arg1 sideAppFrame:(struct CGRect *)arg2 grabberHorizontalOffset:(double *)arg3 forResizeGestureLocation:(double)arg4 region:(unsigned long long)arg5 allowRubberbanding:(_Bool)arg6;
- (double)_maxRubberBandOffsetForAppWidth:(double)arg1;
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(_Bool *)arg5;
- (long long)_sideAppWidthForResizeGestureRegion:(unsigned long long)arg1;
- (_Bool)_isResizeGestureInSpeculativeResizeRegionForLocation:(double)arg1;
- (unsigned long long)_resizeGestureRegionForLocation:(double)arg1;
- (void)_bailOutOfResizeUIInAnUnsightlyManner;
- (void)_dismissResizeUI;
- (void)_dismissResizeUIAnimated:(_Bool)arg1;
- (id)resizeGestureRecognizer;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 layoutViewController:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

