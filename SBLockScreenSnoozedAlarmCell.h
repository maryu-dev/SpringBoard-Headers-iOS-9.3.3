
#import "SBLockScreenBulletinCell.h"

#import "SBDateLabelDelegate.h"

@class SBSnoozedAlarmDateLabel;

@interface SBLockScreenSnoozedAlarmCell : SBLockScreenBulletinCell <SBDateLabelDelegate>
{
    SBSnoozedAlarmDateLabel *_countdownLabel;
}

+ (_Bool)wantsUnlockActionText;
+ (double)rowHeight;
- (void)dateLabelDidChange:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setFireDate:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

