
#import "NSObject.h"

@class SBAlert;

@protocol SBAlertChangeTransactionDelegate <NSObject>

@optional
- (void)alert:(SBAlert *)arg1 didDeactivateWithCompletion:(void (^)(void))arg2;
- (void)alert:(SBAlert *)arg1 didActivateWithCompletion:(void (^)(void))arg2;
@end

