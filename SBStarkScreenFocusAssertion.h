
#import "NSObject.h"

@class NSString, UIWindow;

@interface SBStarkScreenFocusAssertion : NSObject
{
    NSString *_name;
    long long _type;
    double _priority;
    NSString *_bundleID;
    int _pid;
    UIWindow *_window;
}

- (id)description;
- (id)initWithName:(id)arg1 type:(long long)arg2 priority:(double)arg3 window:(id)arg4 application:(id)arg5 pid:(int)arg6;

@end

