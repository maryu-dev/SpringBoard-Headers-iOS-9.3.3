
#import "NSObject.h"

@class SBDisplayItem, SBWorkspaceTransitionRequest;

@protocol SBAppSwitcherPageContentView <NSObject>
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)invalidate;

@optional
- (void)transitionDidEnd:(_Bool)arg1 forPresentation:(_Bool)arg2;
- (void)interactionDidEnd:(_Bool)arg1;
- (void)updateTransitionProgress:(double)arg1;
- (void)viewDismissing:(SBDisplayItem *)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(SBWorkspaceTransitionRequest *)arg4;
- (void)viewPresenting:(SBDisplayItem *)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(SBWorkspaceTransitionRequest *)arg4;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)prepareToBecomeVisibleIfNecessary;
@end

