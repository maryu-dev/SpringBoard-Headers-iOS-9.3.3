
#import "NSObject.h"

@class NSMutableDictionary;

@interface SBWallpaperControllerCoordinator : NSObject
{
    NSMutableDictionary *_bundleIDToApplicationTransitionStates;
    NSMutableDictionary *_bundleIDToApplicationAnimationTransitionStates;
}

- (_Bool)removeHomescreenStyleForBundleID:(id)arg1 priority:(long long)arg2 animationFactory:(id)arg3;
- (_Bool)setHomescreenStyleTransitionState:(id)arg1 forBundleID:(id)arg2 priority:(long long)arg3 animationFactory:(id)arg4;
- (_Bool)setHomescreenStyle:(long long)arg1 forBundleID:(id)arg2 priority:(long long)arg3 animationFactory:(id)arg4;
- (_Bool)_updateWallpaperAndBackgroundStatesForModifiedBundleID:(id)arg1 animationFactory:(id)arg2;
- (long long)_effectivePriorityForBundleID:(id)arg1;
- (id)_effectiveStateForBundleID:(id)arg1;
- (id)_stateLookupForPriority:(long long)arg1;
- (id)_backgroundColorForApp:(id)arg1;
- (void)_setBackgroundColor:(id)arg1 forBundleID:(id)arg2 withAnimationFactory:(id)arg3;
- (id)description;
- (id)init;

@end

