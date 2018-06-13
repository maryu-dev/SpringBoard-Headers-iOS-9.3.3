
#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSString;

@interface SBBadgeCountRecipe : NSObject <SBTestRecipe>
{
}

+ (id)title;
- (void)_changeBadge:(int)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

