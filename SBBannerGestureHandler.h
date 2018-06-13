
#import "NSObject.h"

@class SBBannerContainerViewController, SBBannerContextView, SBBannerController;

@interface SBBannerGestureHandler : NSObject
{
    id <SBBannerGestureHandlerDelegate> _delegate;
    SBBannerContainerViewController *_bannerViewController;
    SBBannerController *_bannerController;
}

+ (id)pullDownHandlerWithBannerController:(id)arg1 bannerViewController:(id)arg2;
+ (id)notificationCenterHandlerWithBannerController:(id)arg1 bannerViewController:(id)arg2;
- (void)invalidate;
@property(readonly, nonatomic) SBBannerContextView *bannerView;
- (_Bool)handleGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 displacement:(double)arg4 velocity:(double)arg5;
- (id)initWithBannerController:(id)arg1 bannerViewController:(id)arg2;

@end

