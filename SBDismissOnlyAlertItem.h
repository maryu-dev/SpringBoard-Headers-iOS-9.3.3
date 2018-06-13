
#import "SBAlertItem.h"

@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem
{
    NSString *_title;
    NSString *_body;
    double _autoDismissInterval;
}

- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)dismissButtonText;
- (void)performUnlockAction;
- (id)bodyText;
- (id)title;
- (void)setBodyText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setAutoDismissInterval:(double)arg1;
- (double)autoDismissInterval;
- (id)initWithTitle:(id)arg1 body:(id)arg2;

@end

