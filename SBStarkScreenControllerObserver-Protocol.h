
#import "NSObject.h"

@class SBStarkScreenController;

@protocol SBStarkScreenControllerObserver <NSObject>
- (void)starkScreenController:(SBStarkScreenController *)arg1 didChangeStateFromState:(long long)arg2;
@end

