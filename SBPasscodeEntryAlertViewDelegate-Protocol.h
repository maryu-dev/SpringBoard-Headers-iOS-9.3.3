
#import "NSObject.h"

@class SBPasscodeEntryAlertView;

@protocol SBPasscodeEntryAlertViewDelegate <NSObject>

@optional
- (_Bool)passcodeAlertViewShouldShowAutomaticallyWhenVisible:(SBPasscodeEntryAlertView *)arg1;
@end

