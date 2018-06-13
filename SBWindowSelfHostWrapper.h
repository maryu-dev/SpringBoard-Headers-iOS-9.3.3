
#import "NSObject.h"

@class NSString, SBWindow, UIView, UIWindow;

@interface SBWindowSelfHostWrapper : NSObject
{
    SBWindow *_window;
    UIView *_contextHostView;
    NSString *_contextHostRequester;
}

- (void)stopHosting;

@end

