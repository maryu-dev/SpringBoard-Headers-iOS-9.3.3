
#import "NSObject.h"

#import "SBTestRecipe.h"

@class BKSProcessAssertion, FBApplicationUpdateScenesTransaction, NSString;

@interface SBWindowManagerWithActionTestRecipe : NSObject <SBTestRecipe>
{
    BKSProcessAssertion *_assertion;
    FBApplicationUpdateScenesTransaction *_currentTransaction;
}

+ (id)title;
- (void)handleVolumeDecrease;
- (void)takeProcessAssertionWithSequenceNumber:(int)arg1;
- (void)invalidateProcessAssertion;
- (void)handleVolumeIncrease;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

