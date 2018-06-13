
#import "SBWidgetViewController.h"

@class NSDate, NSMapTable, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSTimer, UIView, _SBBrokenWidgetView, _SBWidgetRemoteViewController;

@interface _SBWidgetViewControllerOutOfProcess : SBWidgetViewController
{
    _Bool _snapshottingEnabled;
    _Bool _requestingRemoteViewController;
    _Bool _disconnectingRemoteViewController;
    _Bool _encodingLayerTree;
    _Bool _didRequestViewInset;
    _Bool _didUpdate;
    _Bool _blacklisted;
    NSObject<OS_dispatch_queue> *_proxyConnectionQueue;
    NSObject<OS_dispatch_queue> *_proxyDisconnectionQueue;
    NSObject<OS_dispatch_queue> *_proxyRequestQueue;
    NSObject<OS_dispatch_queue> *_diskWriteQueue;
    _SBWidgetRemoteViewController *_remoteViewController;
    id <NSCopying> _extensionRequest;
    UIView *_contentProvidingView;
    UIView *_snapshotView;
    NSTimer *_disconnectionTimer;
    NSObject<OS_dispatch_semaphore> *_viewWillAppearSemaphore;
    NSObject<OS_dispatch_semaphore> *_viewWillDisappearSemaphore;
    id _remoteViewControllerDisconnectionHandler;
    NSDate *_lastUnanticipatedDisconnectionDate;
    NSMapTable *_openAppearanceTransactions;
    _SBBrokenWidgetView *_brokenView;
    id _activeAppearanceTransitionCompletion;
}

+ (void)initialize;
- (id)description;
- (id)_cancelTouches;
- (_Bool)_effectiveHasContent;
- (id)_valueForCachedStateKey:(id)arg1;
- (void)_synchronizeCachedState;
- (id)_cachedStateURLEnsuringDirectoryExists:(_Bool)arg1;
- (void)widget:(id)arg1 didTerminateWithError:(id)arg2;
- (void)_disconnectRemoteViewControllerAndCoalesce:(_Bool)arg1 completionHandler:(id)arg2;
- (void)_invalidateDisconnectionTimer;
- (void)_disconnectionTimerDidFire:(id)arg1;
- (void)_disconnectRemoteViewController:(id)arg1;
- (void)_finishDisconnectingRemoteViewControllerWithError:(id)arg1 completion:(id)arg2;
- (void)handleReconnectionRequest:(id)arg1;
- (_Bool)_attemptReconnectionAfterUnanticipatedDisconnection;
- (_Bool)_canDisconnectRemoteViewController:(id *)arg1;
- (void)_requestRemoteViewController:(id)arg1;
- (_Bool)_canRequestRemoteViewController:(id *)arg1;
- (void)_handleRequestedViewHeight:(double)arg1 usingAutolayout:(_Bool)arg2 requestIdentifier:(id)arg3;
- (double)_updatePreferredContentSizeWithHeight:(double)arg1;
- (double)_contentWidth;
- (struct UIEdgeInsets)_marginInsets;
- (struct CGSize)_maxSize;
- (void)_insertAppropriateViewWithContent;
- (_Bool)_isRemoteViewVisible;
- (void)_insertRemoteViewAfterViewWillAppearWithCompletion:(id)arg1;
- (_Bool)_canInsertRemoteView;
- (void)_insertContentProvidingSubview:(id)arg1 completion:(id)arg2;
- (void)_endRequestState:(long long)arg1;
- (void)setRequestState:(long long)arg1;
- (void)_loadSnapshotViewFromDiskIfNecessary:(id)arg1;
- (void)_packageViewFromURL:(id)arg1 reply:(id)arg2;
- (void)_packageViewWithData:(id)arg1 reply:(id)arg2;
- (void)_packageViewWithBlock:(id)arg1 reply:(id)arg2;
- (void)_captureLayerTree:(id)arg1;
- (void)_invalidateSnapshotWithForce:(_Bool)arg1 completionHandler:(id)arg2;
- (void)_setSnapshotView:(id)arg1 forLayoutMode:(long long)arg2;
- (void)_removeAllSnapshotsAndCache:(_Bool)arg1;
- (void)_removeAllSnapshots;
- (void)_moveSnapshotsToCache;
- (void)_writeSnapshotData:(id)arg1 toURLForLayoutMode:(long long)arg2;
- (void)_removeSnapshotAtURL:(id)arg1;
- (id)_widgetSnapshotURLForLayoutMode:(long long)arg1 ensuringDirectoryExists:(_Bool)arg2;
- (id)_snapshotIdentifierForLayoutMode:(long long)arg1;
- (void)_enqueueRemoteServiceRequest:(id)arg1 withDescription:(id)arg2;
- (void)_enqueueRequest:(id)arg1 inQueue:(id)arg2 trampolinedToMainQueue:(_Bool)arg3 withDescription:(id)arg4;
- (id)_request:(id)arg1 withDescription:(id)arg2 forQueue:(id)arg3 trampolinedToMainQueue:(_Bool)arg4;
- (void)_setupRequestQueue;
- (id)auditToken;
- (void)performUpdateWithCompletionHandler:(id)arg1;
- (void)setHasContent:(_Bool)arg1;
- (void)insertSnapshotWithCompletionHandler:(id)arg1;
- (void)requestInsertionOfRemoteViewWithCompletionHandler:(id)arg1;
- (void)invalidateCachedSnapshotWithCompletionHandler:(id)arg1;
- (void)validateSnapshotViewForActiveLayoutMode;
- (void)captureSnapshotWithCompletionHandler:(id)arg1;
- (void)_disconnectRemoteViewControllerImmediatelyWithCompletionHandler:(id)arg1;
- (void)disconnectRemoteViewControllerWithCompletionHandler:(id)arg1;
- (void)connectRemoteViewControllerWithCompletionHandler:(id)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)endAppearanceTransitionWithCompletion:(id)arg1;
- (void)beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_endRemoteViewControllerAppearanceTransitionIfNecessary;
- (void)_endRemoteViewControllerAppearanceTransitionIfNecessaryWithCompletion:(id)arg1;
- (void)_beginRemoteViewControllerAppearanceTransitionIfNecessary:(_Bool)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)dealloc;
- (id)initWithWidgetIdentifier:(id)arg1 bundlePath:(id)arg2;

@end

