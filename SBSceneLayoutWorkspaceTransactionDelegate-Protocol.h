
#import "NSObject.h"

@class SBSceneLayoutWorkspaceTransaction;

@protocol SBSceneLayoutWorkspaceTransactionDelegate <NSObject>
- (void)transaction:(SBSceneLayoutWorkspaceTransaction *)arg1 didEndLayoutTransitionWithContinuation:(void (^)(SBWorkspaceApplicationTransitionContext *, unsigned long long))arg2;
- (void)transaction:(SBSceneLayoutWorkspaceTransaction *)arg1 performTransitionWithCompletion:(void (^)(void))arg2;
- (void)transactionWillBeginLayoutTransition:(SBSceneLayoutWorkspaceTransaction *)arg1;

@optional
- (_Bool)transactionShouldConsiderLockStateForForegroundScenesDuringTransition:(SBSceneLayoutWorkspaceTransaction *)arg1;
@end

