
#import "NSObject.h"

@class NSString;

@interface SBIconAnimationContext : NSObject
{
    double _delay;
    double _fraction;
    id _completion;
    NSString *_identifier;
}

- (void)invalidate;
- (void)dealloc;
- (id)initWithNotificationIdentifier:(id)arg1;

@end

