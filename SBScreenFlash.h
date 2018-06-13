
#import "NSObject.h"

@class NSMutableArray, UIScreen, UIView, UIWindow;

@interface SBScreenFlash : NSObject
{
    NSMutableArray *_flashCompletionBlocks;
    UIScreen *_screen;
    UIWindow *_flashWindow;
    UIView *_flashView;
    _Bool _windowVisible;
}

+ (id)mainScreenFlasher;
- (void)_orderWindowFront:(id)arg1 withColor:(id)arg2;
- (void)_orderWindowOut:(id)arg1;
- (void)_tearDown;
- (void)_createUIWithColor:(id)arg1;
- (void)flashColor:(id)arg1 withCompletion:(id)arg2;
- (void)flashWhiteWithCompletion:(id)arg1;
- (id)initWithScreen:(id)arg1;

@end

