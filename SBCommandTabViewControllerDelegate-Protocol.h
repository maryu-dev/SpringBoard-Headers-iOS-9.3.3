
#import "NSObject.h"

@class NSString, SBCommandTabViewController;

@protocol SBCommandTabViewControllerDelegate <NSObject>
- (void)viewControllerWantsDismissal:(SBCommandTabViewController *)arg1;
- (void)viewController:(SBCommandTabViewController *)arg1 selectedApplicationWithBundleID:(NSString *)arg2;
@end

