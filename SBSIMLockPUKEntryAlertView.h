
#import "SBSIMLockEntryAlertView.h"

@class NSString;

@interface SBSIMLockPUKEntryAlertView : SBSIMLockEntryAlertView
{
    int _state;
    NSString *_enteredPUKCode;
    NSString *_newPIN;
}

- (void)_attemptPUKUnlock;
- (id)_pukAttemptsRemainingLabel;
- (void)_unlock;
- (void)setupFailureState;
- (void)setupSuccess;
- (id)label;
- (id)titleText;

@end

