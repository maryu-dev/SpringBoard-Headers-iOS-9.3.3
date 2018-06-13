
#import "NSObject.h"

@class SUAutoInstallOperation;

@interface SBSoftwareUpdateInstallOperationLifeCycleHandler : NSObject
{
    _Bool _used;
    SUAutoInstallOperation *_tryTonightOperation;
}

- (void)_clearTryTonightOperationCancelling:(_Bool)arg1 forReason:(id)arg2;
- (void)cancel;
- (void)dealloc;
- (id)initWithTryTonightInstallOperation:(id)arg1;

@end

