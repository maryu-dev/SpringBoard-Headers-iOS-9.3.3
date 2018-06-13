
#import "NSObject.h"

@class NSExtension, NSURL, SBWidgetViewController;

@protocol SBWidgetViewControllerDelegate <NSObject>

@optional
- (struct UIEdgeInsets)marginInsetsForWidget:(SBWidgetViewController *)arg1;
- (struct CGSize)maxSizeForWidget:(SBWidgetViewController *)arg1;
- (NSExtension *)extensionForWidget:(SBWidgetViewController *)arg1;
- (long long)activeLayoutModeForWidget:(SBWidgetViewController *)arg1;
- (void)attemptReconnectionAfterUnanticipatedDisconnection:(SBWidgetViewController *)arg1;
- (_Bool)widgetShouldAttemptReconnectionAfterUnanticipatedDisconnection:(SBWidgetViewController *)arg1;
- (_Bool)shouldRequestWidgetRemoteViewControllers;
- (void)contentAvailabilityDidChangeForWidget:(SBWidgetViewController *)arg1;
- (void (^)(void))widget:(SBWidgetViewController *)arg1 didUpdatePreferredHeight:(double)arg2 completion:(void (^)(_Bool))arg3;
- (void)widget:(SBWidgetViewController *)arg1 requestsLaunchOfURL:(NSURL *)arg2;
- (void)remoteViewControllerDidConnectForWidget:(SBWidgetViewController *)arg1;
@end

