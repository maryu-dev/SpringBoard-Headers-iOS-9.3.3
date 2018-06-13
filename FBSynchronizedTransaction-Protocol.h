
#import "NSObject.h"

@protocol FBSynchronizedTransaction <NSObject>
@property(nonatomic) id <FBSynchronizedTransactionDelegate> synchronizationDelegate;
- (void)performSynchronizedCommit;
- (_Bool)isReadyForSynchronizedCommit;
@end

