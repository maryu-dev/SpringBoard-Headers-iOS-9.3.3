
#import "NSObject.h"

@class CBClient;

@interface SBHarmonyController : NSObject
{
    CBClient *_client;
    _Bool _supportsWhitePointAdaptation;
    _Bool _supportsBlueLightReduction;
}

+ (id)sharedInstance;
- (void)transitionFromWhitePointAdaptivityStyleWithStyles:(id)arg1 toWhitePointAdaptivityStyleWithStyles:(id)arg2 fromPercentage:(double)arg3 toPercentage:(double)arg4 animationSettings:(id)arg5;
- (void)setWhitePointAdaptivityStyleWithStyles:(id)arg1 animationSettings:(id)arg2;
- (void)setWhitePointAdaptivityStyle:(long long)arg1 animationSettings:(id)arg2;
@property(nonatomic) long long whitePointAdaptivityStyle;
@property(nonatomic, getter=isWhitePointAdaptationEnabled) _Bool whitePointAdaptationEnabled;
- (id)init;

@end

