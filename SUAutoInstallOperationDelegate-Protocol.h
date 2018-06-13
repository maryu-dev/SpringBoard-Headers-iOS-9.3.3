
#import "NSObject.h"

@class SUAutoInstallOperation;

@protocol SUAutoInstallOperationDelegate <NSObject>
- (void)autoInstallOperationIsReadyToInstall:(SUAutoInstallOperation *)arg1 withResponse:(void (^)(_Bool, NSError *))arg2;
- (void)autoInstallOperationDidConsent:(SUAutoInstallOperation *)arg1;
- (void)autoInstallOperationDidExpire:(SUAutoInstallOperation *)arg1;
- (void)autoInstallOperationWasCancelled:(SUAutoInstallOperation *)arg1;
@end

