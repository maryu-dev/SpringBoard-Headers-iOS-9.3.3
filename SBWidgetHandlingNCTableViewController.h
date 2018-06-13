
#import "SBNCTableViewController.h"

#import "SBNotificationCenterWidgetHost.h"

@class NSArray, NSMutableDictionary, NSSet, NSString;

@interface SBWidgetHandlingNCTableViewController : SBNCTableViewController <SBNotificationCenterWidgetHost>
{
    NSMutableDictionary *_identifiersToWidgets;
    id _owedWillAppearBlock;
    NSMutableDictionary *_outstandingWidgetUpdateRequests;
    id _cancelTouchesForHitWidgetAssertion;
    id <SBWidgetViewControllerDelegate> _widgetDelegate;
}

- (void)_cancelTouchesForHitWidgetIfNecessary;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(readonly, nonatomic) __weak NSArray *allEnabledWidgetIDs;
@property(readonly, nonatomic) __weak NSSet *visibleWidgetIDs;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)attemptReconnectionAfterUnanticipatedDisconnection:(id)arg1;
- (void)makeVisibleWidgetInSection:(id)arg1 andConnect:(_Bool)arg2 animated:(_Bool)arg3 completion:(id)arg4;
- (void)removeChildRowIfPossible:(id)arg1;
- (void)addChildRowIfPossible:(id)arg1;
- (void)_updateWidgetViewState;
- (void)_insertSnapshotsForWidgetsWithIDs:(id)arg1 animated:(_Bool)arg2;
- (void)_insertRemoteViewsForWidgetsWithIDs:(id)arg1 animated:(_Bool)arg2;
- (void)_captureSnapshot:(_Bool)arg1 andInsert:(_Bool)arg2 disconnectingRemoteViewController:(_Bool)arg3 forceDisconnection:(_Bool)arg4 forWidget:(id)arg5 completion:(id)arg6;
- (void)_disconnectRemoteViewController:(_Bool)arg1 forWidget:(id)arg2 withCompletion:(id)arg3;
- (void)_insertSnapshot:(_Bool)arg1 forWidget:(id)arg2 withCompletion:(id)arg3;
- (void)_captureSnapshot:(_Bool)arg1 forWidget:(id)arg2 withCompletion:(id)arg3;
- (void)_insertRemoteViewForWidget:(id)arg1 completion:(id)arg2;
- (id)_completionHandlerForUpdateRequestForWidget:(id)arg1;
- (void)_registerUpdateRequestCompletionHandler:(id)arg1 forWidget:(id)arg2;
- (_Bool)_widgetHasOutstandingUpdateRequest:(id)arg1;
- (void)_noteOutstandingUpdateRequestForWidget:(id)arg1;
- (void)widgetViewControllerEndAppearanceTransitionIfNecessary:(id)arg1;
- (void)widgetViewControllerEndAppearanceTransitionIfNecessary:(id)arg1 completion:(id)arg2;
- (void)widgetViewController:(id)arg1 beginAppearanceTransitionIfNecessary:(_Bool)arg2 animated:(_Bool)arg3;
- (void)widgetViewController:(id)arg1 beginAppearanceTransitionIfNecessary:(_Bool)arg2 animated:(_Bool)arg3 completion:(id)arg4;
- (void)_invokeBlockWithAllVisibleWidgets:(id)arg1;
- (void)invalidateSectionAndRowViewHeights:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

