
#import "NSObject.h"

@class UIWindow;

@protocol SBWindowLayoutStrategy <NSObject>
- (_Bool)shouldClipForWindow:(UIWindow *)arg1;
- (struct CGRect)frameForWindow:(UIWindow *)arg1;
@end

