
#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSString;

@interface SBWidgetDebuggingTestRecipe : NSObject <SBTestRecipe>
{
}

+ (id)__systemService;
+ (id)title;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)_enableAllWidgets;
- (void)_openNotificationCenter;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

