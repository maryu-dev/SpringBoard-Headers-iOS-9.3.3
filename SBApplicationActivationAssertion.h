
#import "NSObject.h"

@class NSString, SBApplication;

@interface SBApplicationActivationAssertion : NSObject
{
    SBApplication *_app;
    NSString *_name;
}

- (void)dealloc;
- (id)initWithApplication:(id)arg1 name:(id)arg2;

@end

