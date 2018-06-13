
#import "NSObject.h"

@class NCNotificationActionTextInputViewController, NSString;

@protocol NCNotificationActionTextInputDelegate <NSObject>
- (void)textInputViewController:(NCNotificationActionTextInputViewController *)arg1 didSendTypedText:(NSString *)arg2;
@end

