
#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSString;

@interface SBAdvanceDateOverrideTestRecipe : NSObject <SBTestRecipe>
{
}

+ (id)title;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)advanceOverrideDateByAmount:(long long)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

