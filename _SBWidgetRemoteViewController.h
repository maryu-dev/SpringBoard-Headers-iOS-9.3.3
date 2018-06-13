
#import "_UIRemoteViewController.h"

#import "_NCWidgetViewController_Host_IPC.h"

@class NSObject<OS_dispatch_queue>, _SBWidgetViewControllerOutOfProcess;

@interface _SBWidgetRemoteViewController : _UIRemoteViewController <_NCWidgetViewController_Host_IPC>
{
    _Bool _valid;
    _Bool _hasManagingHost;
    _SBWidgetViewControllerOutOfProcess *_managingHost;
    NSObject<OS_dispatch_queue> *_managingHostQueue;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)__closeTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)__requestLaunchOfURL:(id)arg1;
- (void)__requestPreferredViewHeight:(double)arg1 usingAutolayout:(_Bool)arg2 requestIdentifier:(id)arg3;
- (void)_performUpdateWithReplyHandler:(id)arg1;
- (void)_requestEncodedLayerTreeWithReplyHandler:(id)arg1;
- (void)_openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)_viewWillTransitionToSize:(struct CGSize)arg1 requestIdentifier:(id)arg2;
- (void)_performOutstandingCompletionWithRequestIdentifier:(id)arg1;
- (void)_performOutstandingAnimationsWithRequestIdentifier:(id)arg1;
- (void)_setWidgetIdentifier:(id)arg1;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidRegisterScrollToTopView;
- (_Bool)_serviceHasScrollToTopView;
- (_Bool)__shouldRemoteViewControllerFenceOperations;
- (id)disconnect;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

