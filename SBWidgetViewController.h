
#import "UIViewController.h"

@class BSAuditToken, NSString;

@interface SBWidgetViewController : UIViewController
{
    _Bool _hasContent;
    long long _requestState;
    _Bool _implementsPerformUpdate;
    NSString *_appBundleID;
    NSString *_widgetIdentifier;
    BSAuditToken *_auditToken;
    id <SBWidgetViewControllerDelegate> _delegate;
}

+ (id)requestViewController:(id)arg1 context:(id)arg2 handler:(id)arg3;
+ (id)_requestLocalViewControllerOfClass:(Class)arg1 context:(id)arg2 handler:(id)arg3;
+ (id)widgetViewControllerWithIdentifier:(id)arg1 bundlePath:(id)arg2;
- (void)_disconnectRemoteViewControllerImmediatelyWithCompletionHandler:(id)arg1;
- (void)disconnectRemoteViewControllerWithCompletionHandler:(id)arg1;
- (void)connectRemoteViewControllerWithCompletionHandler:(id)arg1;
- (void)insertSnapshotWithCompletionHandler:(id)arg1;
- (void)requestInsertionOfRemoteViewWithCompletionHandler:(id)arg1;
- (void)invalidateCachedSnapshotWithCompletionHandler:(id)arg1;
- (void)validateSnapshotViewForActiveLayoutMode;
- (void)captureSnapshotWithCompletionHandler:(id)arg1;
- (id)_cancelTouches;
- (void)performUpdateWithCompletionHandler:(id)arg1;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
- (void)endAppearanceTransitionWithCompletion:(id)arg1;
- (void)beginAppearanceTransition:(_Bool)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)updateContentWidth:(double)arg1;
- (void)_requestLaunchOfURL:(id)arg1;
- (void)requestPreferredViewHeightWithHandler:(id)arg1;
@property(readonly, nonatomic, getter=isInternal) _Bool internal;
- (id)initWithWidgetIdentifier:(id)arg1 bundlePath:(id)arg2;

@end

