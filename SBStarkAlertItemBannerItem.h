
#import "SBStarkBannerItem.h"

@class NSDate, NSString, SBAlertItem, SBUISound;

@interface SBStarkAlertItemBannerItem : SBStarkBannerItem
{
    SBAlertItem *_alertItem;
    NSString *_title;
    NSString *_message;
    SBUISound *_sound;
    NSDate *_originDate;
}

- (id)subActions;
- (id)subActionLabels;
- (id)sourceDate;
- (id)sound;
- (id)ignoreAction;
- (id)action;
- (_Bool)isSticky;
- (unsigned long long)priority;
- (_Bool)matchesContext:(id)arg1;
- (void)reloadDisplayProperties;
- (long long)defaultActionType;
- (id)categoryImage;
- (id)category;
- (id)title;
- (void)dealloc;
- (id)initWithAlertItem:(id)arg1 configuration:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

@end

