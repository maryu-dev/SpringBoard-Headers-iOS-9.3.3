
#import "NSObject.h"

@interface _SBScreenshotPersistenceCoordinator : NSObject
{
    unsigned long long _screenshotWriteCount;
}

- (void)_decrementWriteCount;
- (void)_incrementWriteCount;
- (_Bool)_isWritingSnapshot;
- (void)_finishedWritingScreenshot:(id)arg1 didFinishSavingWithError:(id)arg2 context:(void *)arg3;
- (void)saveScreenshot:(id)arg1 withCompletion:(id)arg2;

@end

