
#import "NSObject.h"

@class SBWindow;

@protocol SBStarkWindowDelegate <NSObject>
- (void)starkWindowDidTriggerUnhandledBack:(SBWindow *)arg1;
@end

