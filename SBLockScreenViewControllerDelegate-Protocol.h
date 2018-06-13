
#import "NSObject.h"

@class NSDictionary, NSString;

@protocol SBLockScreenViewControllerDelegate <NSObject>
- (_Bool)attemptUnlockWithPasscode:(NSString *)arg1;
- (void)startUIUnlockFromSource:(int)arg1 withOptions:(NSDictionary *)arg2;
@end

