
#import "NSObject.h"

#import "_SBScreenshotProvider.h"

@class NSString, SBScreenFlash, UIScreen;

@interface _SBDefaultScreenshotProvider : NSObject <_SBScreenshotProvider>
{
    UIScreen *_screen;
    SBScreenFlash *_flasher;
}

- (id)captureScreenshot;
- (id)initWithScreen:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

