
#import "NSObject.h"

@class SBUIControlCenterButton;

@protocol SBUIControlCenterButtonDelegate <NSObject>
- (void)buttonTapped:(SBUIControlCenterButton *)arg1;

@optional
- (void)button:(SBUIControlCenterButton *)arg1 didChangeState:(long long)arg2;
@end

