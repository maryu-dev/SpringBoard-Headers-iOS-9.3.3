
#import "SBLockScreenNotificationBannerItem.h"

@class SBUISound;

@interface SBLockScreenNotificationBulletinBannerItem : SBLockScreenNotificationBannerItem
{
    SBUISound *_sound;
}

- (id)_bulletinListItem;
- (id)lockScreenActionContext;
- (id)attachmentImage;
- (id)attachmentText;
- (id)iconImage;
- (id)sourceDate;
- (id)message;
- (id)subtitle;
- (id)title;
- (id)sound;
- (id)initWithListItem:(id)arg1;

@end

