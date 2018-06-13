
#import "NSObject.h"

@class NSURL;

@protocol AVExternalDeviceDelegate <NSObject>

@optional
- (void)siriRequestedWithAction:(long long)arg1;
- (void)iOSUIRequestedForApplicationURL:(NSURL *)arg1;
@end

