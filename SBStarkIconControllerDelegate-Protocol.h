
#import "NSObject.h"

@class SBStarkIconController, SBWindow;

@protocol SBStarkIconControllerDelegate <NSObject>
- (void)handleBackPress;
- (SBWindow *)animationWindowForIconController:(SBStarkIconController *)arg1;
@end

