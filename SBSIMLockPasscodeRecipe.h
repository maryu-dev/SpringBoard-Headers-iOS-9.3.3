
#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSString, SBSIMLockEntryAlert;

@interface SBSIMLockPasscodeRecipe : NSObject <SBTestRecipe>
{
    SBSIMLockEntryAlert *_alert;
}

+ (id)title;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

