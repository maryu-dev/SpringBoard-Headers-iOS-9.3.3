
#import "NSObject.h"

@class UIInteractionProgress;

@protocol UIInteractionProgressObserver <NSObject>

@optional
- (void)interactionProgress:(UIInteractionProgress *)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(UIInteractionProgress *)arg1;
@end

