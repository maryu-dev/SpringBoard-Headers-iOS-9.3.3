
#import "SBNotificationCell.h"

@class SBNotificationSeparatorView;

@interface SBNotificationsBulletinCell : SBNotificationCell
{
    SBNotificationSeparatorView *_separator;
    _Bool _showsSeparator;
    _Bool _missed;
}

+ (id)defaultColorForRelevanceDate;
+ (struct CGSize)_preferredSizeForRelevanceDateLabel:(id)arg1;
- (void)setSectionLocation:(int)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)setEventDateLabel:(id)arg1;
- (void)setRelevanceDateLabel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

