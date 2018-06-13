
#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSString, SBInsecureDrawingAlertItem;

@interface SBInsecureDrawingAlertItemTestRecipe : NSObject <SBTestRecipe>
{
    SBInsecureDrawingAlertItem *_alertItem;
}

+ (id)title;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

