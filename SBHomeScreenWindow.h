
#import "SBWindow.h"

@class SBHomeScreenViewController;

@interface SBHomeScreenWindow : SBWindow
{
}

+ (_Bool)sb_autorotates;
+ (struct CGRect)constrainFrameToScreen:(struct CGRect)arg1;
@property(readonly, nonatomic) __weak SBHomeScreenViewController *homeScreenViewController;
- (id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5;

@end

