
#import "NSObject.h"

@class SBStarkScreenController;

@protocol SBStarkScreenControllerDelegate <NSObject>
- (void)starkScreenControllerWantsRelockUI:(SBStarkScreenController *)arg1;
- (_Bool)starkScreenControllerShouldDelayUpdateLockoutMode:(SBStarkScreenController *)arg1;
@end

