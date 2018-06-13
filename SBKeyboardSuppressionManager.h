
#import "NSObject.h"

@class NSMutableDictionary;

@interface SBKeyboardSuppressionManager : NSObject
{
    NSMutableDictionary *_keyboardSuppressionAssertions;
}

+ (id)sharedInstance;
- (id)description;
- (void)_setKeyboardSuppressed:(_Bool)arg1 forReason:(id)arg2 withPredicate:(id)arg3;
- (void)stopSuppressingKeyboardWithReason:(id)arg1;
- (void)startSuppressingKeyboardWithReason:(id)arg1 predicate:(id)arg2;
- (id)init;

@end

