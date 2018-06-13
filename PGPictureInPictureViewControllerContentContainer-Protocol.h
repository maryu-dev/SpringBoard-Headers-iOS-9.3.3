
#import "NSObject.h"

@protocol PGPictureInPictureViewControllerContentContainer <NSObject>
- (_Bool)handleDoubleTapGesture;
- (_Bool)handleTapGesture;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(void (^)(void))arg2;
- (void)performStopAnimationWithFinalLayerFrame:(struct CGRect)arg1 animationHandler:(void (^)(void))arg2 completionHandler:(void (^)(void))arg3;
- (void)performStartAnimationWithAnimationHandler:(void (^)(void))arg1 completionHandler:(void (^)(void))arg2;
- (void)prepareStartAnimationWithInitialLayerFrame:(struct CGRect)arg1 completionHandler:(void (^)(void))arg2;
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;
@end

