
#import "NSObject.h"

@protocol SBPowerDownViewInterface <NSObject>
@property(nonatomic) id <SBPowerDownViewDelegate> delegate;
- (void)animateOut;
- (void)animateIn;
@end

