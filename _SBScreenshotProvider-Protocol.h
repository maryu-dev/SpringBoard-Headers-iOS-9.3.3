
#import "NSObject.h"

@class SBScreenFlash, UIImage, UIScreen;

@protocol _SBScreenshotProvider <NSObject>
@property(readonly, nonatomic) SBScreenFlash *flasher;
@property(readonly, nonatomic) UIScreen *screen;
- (UIImage *)captureScreenshot;
@end

