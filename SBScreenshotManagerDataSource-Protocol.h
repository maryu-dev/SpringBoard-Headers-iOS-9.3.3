
#import "NSObject.h"

@class NSArray, SBScreenshotManager;

@protocol SBScreenshotManagerDataSource <NSObject>
- (NSArray *)screenshotManagerDefaultScreensToScreenshot:(SBScreenshotManager *)arg1;
@end

