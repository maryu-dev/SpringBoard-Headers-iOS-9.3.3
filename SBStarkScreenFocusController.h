
#import "NSObject.h"

@class NSMutableArray, NSString, SBStarkScreenFocusAssertion, UIScreen, UIWindow;

@interface SBStarkScreenFocusController : NSObject
{
    UIScreen *_screen;
    NSString *_displayID;
    NSMutableArray *_assertions;
    SBStarkScreenFocusAssertion *_lastFocusAssertion;
    UIWindow *_focusWindow;
}

- (id)description;
- (void)dropReason:(id)arg1;
- (void)takeWithPriority:(double)arg1 reason:(id)arg2 forWindow:(id)arg3 bundleIdentifier:(id)arg4 pid:(int)arg5;
- (void)invalidate;
- (void)_applyAssertion:(id)arg1;
- (void)_updateEventFocus;
- (void)dealloc;
- (id)initWithScreen:(id)arg1;

@end

