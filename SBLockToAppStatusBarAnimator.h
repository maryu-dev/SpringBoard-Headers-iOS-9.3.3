
#import "NSObject.h"

@class SBDisableAppStatusBarAlphaChangesAssertion;

@interface SBLockToAppStatusBarAnimator : NSObject
{
    SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAlphaChangeAssertion;
}

- (void)animateStatusBarFromLockToHome;

@end

