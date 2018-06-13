
#import "SBAwayListItem.h"

@class NSString, SBAlertItem, UIImage;

@interface SBAwaySystemAlertItem : SBAwayListItem
{
    SBAlertItem *_currentAlert;
    NSString *_title;
    UIImage *_appImage;
    NSString *_message;
    long long _displayedButtonIndex;
    _Bool _isAlarm;
}

- (_Bool)isAlarm;
- (void)buttonPressed;
- (id)sortDate;
- (id)iconImage;
- (id)title;
- (id)message;
- (void)setCurrentAlert:(id)arg1;
- (id)currentAlert;
- (id)initWithSystemAlert:(id)arg1;
- (id)init;

@end

