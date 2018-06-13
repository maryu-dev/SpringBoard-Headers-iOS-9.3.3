
#import "UIViewController.h"

@class NSDate, NSTimer;

@interface SBLockScreenTimerViewController : UIViewController
{
    _Bool _enabled;
    NSTimer *_updateTimer;
    NSDate *_endDate;
    id <SBLockScreenTimerViewControllerDelegate> _delegate;
}

- (void)_scheduledTimerDidChange:(id)arg1;
- (void)_scheduledLocalNotificationsDidChange:(id)arg1;
- (void)_handleClockNotificationUpdate:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)_updateTimerLabelView;
- (void)_updateTimerFired;
- (void)_startTimer;
- (void)_stopTimer;
- (_Bool)_isEndDateValid;
- (id)timerView;
- (void)setEndDate:(id)arg1;
- (void)setTimerHidden:(_Bool)arg1;
- (_Bool)isTimerActive;
- (void)setEnabled:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

