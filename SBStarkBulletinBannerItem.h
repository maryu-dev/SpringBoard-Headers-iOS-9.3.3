
#import "SBStarkBannerItem.h"

@class BBBulletin, SBUISound;

@interface SBStarkBulletinBannerItem : SBStarkBannerItem
{
    BBBulletin *_bulletin;
    SBUISound *_sound;
    unsigned long long _feed;
}

- (id)_uiBannerActionForBBAction:(id)arg1 context:(id)arg2;
- (_Bool)_supportsSubActions;
- (id)subActions;
- (id)subActionLabels;
- (_Bool)shouldShowModalSubActions;
- (id)bbAllActions;
- (id)bbSupplementaryActions;
- (id)_bbDismissAppearance;
- (id)_bbDismissAction;
- (id)sound;
- (id)sourceDate;
- (id)action;
- (_Bool)matchesContext:(id)arg1;
- (long long)defaultActionType;
- (id)categoryImage;
- (id)message;
- (id)subTitle;
- (id)title;
- (void)updateBulletinToInstance:(id)arg1;
- (id)initWithBulletin:(id)arg1 feed:(unsigned long long)arg2 configuration:(id)arg3;
- (id)initWithConfiguration:(id)arg1;

@end

