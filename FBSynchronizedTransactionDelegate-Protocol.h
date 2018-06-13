
#import "NSObject.h"

@class FBTransaction<FBSynchronizedTransaction>, NSArray;

@protocol FBSynchronizedTransactionDelegate <NSObject>
- (void)synchronizedTransaction:(FBTransaction<FBSynchronizedTransaction> *)arg1 didCommitSynchronizedTransactions:(NSArray *)arg2;
- (void)synchronizedTransaction:(FBTransaction<FBSynchronizedTransaction> *)arg1 willCommitSynchronizedTransactions:(NSArray *)arg2;
- (void)synchronizedTransactionReadyToCommit:(FBTransaction<FBSynchronizedTransaction> *)arg1;
@end

