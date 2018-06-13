
#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSMapTable, NSString;

@interface SBStatusBarStyleOverridesAssertionTestRecipe : NSObject <SBTestRecipe>
{
    NSMapTable *_assertionsByApp;
}

+ (id)title;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

