
#import "NSObject.h"

@class BKSProcessAssertion, NSString;

@interface SBBackgroundFetchTask : NSObject
{
    _Bool _finished;
    int _sequenceNumber;
    BKSProcessAssertion *_assertion;
    id _completionHandler;
    NSString *_bundleID;
    unsigned long long _trigger;
}

- (id)description;
- (void)dealloc;
- (void)_fireCompletionHandlerWithResult:(unsigned long long)arg1;
- (void)finishWithResult:(unsigned long long)arg1;
- (id)initForApplication:(id)arg1 trigger:(unsigned long long)arg2 sequenceNumber:(int)arg3 withCompletion:(id)arg4;

@end

