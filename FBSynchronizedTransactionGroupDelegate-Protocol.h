
#import "FBSynchronizedTransactionDelegate.h"

@class FBSynchronizedTransactionGroup, FBTransaction<FBSynchronizedTransaction>;

@protocol FBSynchronizedTransactionGroupDelegate <FBSynchronizedTransactionDelegate>

@optional
- (_Bool)synchronizedTransactionGroup:(FBSynchronizedTransactionGroup *)arg1 shouldFailForSynchronizedTransaction:(FBTransaction<FBSynchronizedTransaction> *)arg2;
@end

