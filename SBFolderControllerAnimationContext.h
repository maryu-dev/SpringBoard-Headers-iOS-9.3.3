
#import "NSObject.h"

@class SBWindow, UIScreen, UIView;

@interface SBFolderControllerAnimationContext : NSObject
{
    UIScreen *_screen;
    SBWindow *_animationWindow;
    UIView *_fallbackIconContainer;
}

+ (id)contextWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3;
- (id)initWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3;

@end

