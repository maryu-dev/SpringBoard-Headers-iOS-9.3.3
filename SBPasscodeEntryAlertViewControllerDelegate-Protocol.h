
#import "NSObject.h"

@class NSString, SBPasscodeEntryAlertViewController;

@protocol SBPasscodeEntryAlertViewControllerDelegate <NSObject>

@optional
- (_Bool)passcodeEntryAlertViewController:(SBPasscodeEntryAlertViewController *)arg1 authenticatePasscode:(NSString *)arg2;
@end

