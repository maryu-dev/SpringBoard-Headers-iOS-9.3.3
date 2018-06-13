
#import "NSObject.h"

@class SBAlertWindowViewController;

@protocol SBAlertWindowViewControllerDelegate <NSObject>
- (unsigned long long)defaultSupportedInterfaceOrientationsForAlertWindowViewController:(SBAlertWindowViewController *)arg1;
- (long long)defaultInterfaceOrientationForPresentationOfAlertWindowViewController:(SBAlertWindowViewController *)arg1;
- (_Bool)defaultShouldAutorotateForAlertWindowViewController:(SBAlertWindowViewController *)arg1;
@end

