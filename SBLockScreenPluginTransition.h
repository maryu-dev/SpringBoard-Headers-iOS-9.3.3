
#import "NSObject.h"

@class SBLockScreenPluginTransitionContext;

@interface SBLockScreenPluginTransition : NSObject
{
    SBLockScreenPluginTransitionContext *_context;
}

- (void)_addToView;
- (void)_removeFromView;
- (void)_removeViewFromHierarchy:(id)arg1;
- (void)beginTransition;
- (id)initWithContext:(id)arg1;

@end

