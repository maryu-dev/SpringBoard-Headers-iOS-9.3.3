
#import "NSObject.h"

@class SBHUDView, UIView, UIWindow;

@interface SBHUDController : NSObject
{
    UIWindow *_hudWindow;
    UIView *_hudContentView;
    SBHUDView *_hudView;
    long long _orientation;
    _Bool _hudVisibleOrFading;
}

+ (id)sharedHUDController;
- (void)hideHUDView;
- (id)visibleOrFadingHUDView;
- (id)visibleHUDView;
- (void)presentHUDView:(id)arg1 autoDismissWithDelay:(double)arg2;
- (void)presentHUDView:(id)arg1;
- (void)_orderWindowOut:(id)arg1;
- (void)_tearDown;
- (void)_createUI;
- (void)reorientHUDIfNeeded:(_Bool)arg1;
- (void)_recenterHUDView;
- (void)dealloc;

@end

