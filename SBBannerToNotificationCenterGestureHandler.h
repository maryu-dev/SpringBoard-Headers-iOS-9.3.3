
#import "SBBannerGestureHandler.h"

@interface SBBannerToNotificationCenterGestureHandler : SBBannerGestureHandler
{
    _Bool _canPullDown;
    _Bool _didPreparePullDown;
    struct CGSize _rootSize;
    struct CGSize _pullDownSize;
    struct CGRect _pullDownTargetRect;
    double _bannerHeight;
    _Bool _bannerHidden;
    _Bool _shouldObscure;
}

- (void)_updateWithDisplacement:(double)arg1 velocity:(double)arg2;
- (_Bool)handleGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 displacement:(double)arg4 velocity:(double)arg5;

@end

