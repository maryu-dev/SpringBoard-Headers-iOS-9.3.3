
#import "UILabel.h"

#import "NCNotificationDateLabel.h"

@class NSString, NSTimer;

@interface SBSnoozedAlarmDateLabel : UILabel <NCNotificationDateLabel>
{
    double _fireTime;
    NSTimer *_tickTimer;
    _Bool _allDay;
    _Bool isTimestamp;
    int _labelType;
    id <SBDateLabelDelegate> _delegate;
}

- (void)stopCoalescingUpdates;
- (void)startCoalescingUpdates;
- (void)prepareForReuse;
- (void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
- (void)_tickTimerFired:(id)arg1;
- (void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
- (void)_updateText;
- (id)_formatDuration:(double)arg1;
- (void)dealloc;
- (void)_invalidateTimer;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

