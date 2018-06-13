
#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSString;

@interface SBIconListScrollingRecipe : NSObject <SBTestRecipe>
{
}

+ (id)title;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

