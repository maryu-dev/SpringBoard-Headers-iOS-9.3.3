
#import "NSObject.h"

@class SBMainDisplaySceneLayoutViewController;

@interface SBSceneLayoutWhitePointAdaptationController : NSObject
{
    SBMainDisplaySceneLayoutViewController *_layoutViewController;
}

+ (_Bool)_isInteractiveUpdateEnabled;
+ (double)_defaultAnimationDuration;
+ (id)_harmonySettings;
+ (id)_defaultAnimationSettings;
+ (id)sharedInstance;
- (id)_applicationForLayoutElement:(id)arg1;
- (long long)_whitePointAdaptivityStyleForLayoutElement:(id)arg1;
- (id)_whitePointAdaptivityStylesForLayoutState;
- (long long)_whitePointAdaptivityStyleForActiveAlert;
- (void)_updateWhitePointAdaptationStrengthWithFromApplications:(id)arg1 toApplications:(id)arg2 fromAlert:(id)arg3 toAlert:(id)arg4 fromPercentage:(double)arg5 toPercentage:(double)arg6 animationSettings:(id)arg7 interactive:(_Bool)arg8;
- (void)_updateWhitePointAdaptationStrengthWithAnimationSettings:(id)arg1;
- (_Bool)_loggingEnabled;
- (void)updateWhitePointAdaptationStrengthWithWorkspaceTransitionRequest:(id)arg1 fromPercentage:(double)arg2 toPercentage:(double)arg3 animationSettings:(id)arg4 interactive:(_Bool)arg5;
- (void)updateWhitePointAdaptationStrengthWithAnimationSettings:(id)arg1;
- (void)updateWhitePointAdaptationStrength;
- (id)init;

@end

