
#import "SBUILockScreenDisableAssertion.h"

@class NSString, SBPasscodeLockDisableAssertion;

@interface SBLockScreenDisableAssertion : SBUILockScreenDisableAssertion
{
    NSString *_identifier;
    SBPasscodeLockDisableAssertion *_disableLockAssertion;
}

+ (void)initialize;
- (void)invalidate;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)arg1;

@end

