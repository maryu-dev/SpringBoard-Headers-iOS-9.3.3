
#import "NSObject.h"

@class BSTransaction;

@protocol BSTransactionObserver <NSObject>

@optional
- (void)transactionDidComplete:(BSTransaction *)arg1;
- (void)transactionDidBegin:(BSTransaction *)arg1;
@end

