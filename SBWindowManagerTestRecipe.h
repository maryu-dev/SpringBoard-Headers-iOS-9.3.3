
#import "NSObject.h"

#import "FBApplicationProcessObserver.h"
#import "SBTestRecipe.h"

@class FBApplicationUpdateScenesTransaction, NSString;

@interface SBWindowManagerTestRecipe : NSObject <FBApplicationProcessObserver, SBTestRecipe>
{
    FBApplicationUpdateScenesTransaction *_currentTransaction;
}

+ (id)title;
- (void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

