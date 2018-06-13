
#import "NSObject.h"

@class SBModeViewController;

@protocol SBModeViewControllerDelegate <NSObject>
- (struct UIEdgeInsets)contentInsetsForModeViewController:(SBModeViewController *)arg1;
@end

