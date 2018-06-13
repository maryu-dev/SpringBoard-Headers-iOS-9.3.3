
#import "NSObject.h"

@class NSString, UITextField;

@protocol UITextFieldDelegate <NSObject>

@optional
- (_Bool)textFieldShouldReturn:(UITextField *)arg1;
- (_Bool)textFieldShouldClear:(UITextField *)arg1;
- (_Bool)textField:(UITextField *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)textFieldDidEndEditing:(UITextField *)arg1;
- (_Bool)textFieldShouldEndEditing:(UITextField *)arg1;
- (void)textFieldDidBeginEditing:(UITextField *)arg1;
- (_Bool)textFieldShouldBeginEditing:(UITextField *)arg1;
@end

