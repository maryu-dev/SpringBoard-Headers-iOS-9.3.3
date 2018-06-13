
#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSString;

@interface SBSnapshotTestRecipe : NSObject <SBTestRecipe>
{
}

+ (id)title;
- (void)_sendRequestWithType:(unsigned long long)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

