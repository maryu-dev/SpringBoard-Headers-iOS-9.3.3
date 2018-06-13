
#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSString;

@interface SBWidgetHandlingBulletinViewControllerTestRecipe : NSObject <SBTestRecipe>
{
}

+ (id)title;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)_reloadTodayViewData:(unsigned long long)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

