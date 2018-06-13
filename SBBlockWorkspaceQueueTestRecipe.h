
#import "NSObject.h"

#import "SBTestRecipe.h"

@class FBWorkspaceEventQueueLock, NSString, NSTimer;

@interface SBBlockWorkspaceQueueTestRecipe : NSObject <SBTestRecipe>
{
    NSTimer *_blockTimer;
    FBWorkspaceEventQueueLock *_queueLock;
}

+ (id)title;
- (void)handleVolumeDecrease;
- (void)blockTimerDidFire:(id)arg1;
- (void)handleVolumeIncrease;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

