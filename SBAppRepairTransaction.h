
#import "FBTransaction.h"

@class NSMutableSet, NSSet;

@interface SBAppRepairTransaction : FBTransaction
{
    NSSet *_appInfos;
    NSMutableSet *_repairRequests;
}

- (void)_startAppRepairs;
- (void)_completeRequest:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)_evaluateCompletion;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_begin;
- (id)initWithApplicationInfos:(id)arg1;

@end

