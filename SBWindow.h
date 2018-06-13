
#import "FBWindow.h"

@class SBRecycledViewsContainer;

@interface SBWindow : FBWindow
{
    SBRecycledViewsContainer *_recycledViewsContainerView;
    id <SBWindowLayoutStrategy> _layoutStrategy;
}

+ (_Bool)sb_autorotates;
+ (_Bool)sb_disableStatusBarHeightChanges;
+ (id)defaultLayoutStrategy;
- (id)description;
- (id)recycledViewsContainer;
- (void)setAutorotates:(_Bool)arg1 forceUpdateInterfaceOrientation:(_Bool)arg2;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4;
- (id)initWithScreen:(id)arg1 debugName:(id)arg2 rootViewController:(id)arg3;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3;
- (id)initWithScreen:(id)arg1 debugName:(id)arg2;

@end

