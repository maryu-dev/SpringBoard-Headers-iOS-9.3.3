
#import "SBAlertItem.h"

@class NSString;

@interface SBPhoneAlertItem : SBAlertItem
{
    NSString *_bodyText;
    NSString *_title;
}

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithTitle:(id)arg1 bodyText:(id)arg2;

@end

