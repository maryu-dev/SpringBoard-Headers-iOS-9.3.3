
#import "SBUIBannerItem.h"

#import "SBDefaultBannerViewSource.h"
#import "SBUIQuietModePlayability.h"

@class NSString, SBAwayListItem;

@interface SBLockScreenNotificationBannerItem : SBUIBannerItem <SBDefaultBannerViewSource, SBUIQuietModePlayability>
{
    SBAwayListItem *_listItem;
    id <SBLockScreenActionHandler> _lockedActionHandler;
    id <SBLockScreenNotificationBannerItemDelegate> _delegate;
}

- (id)lockScreenActionContext;
- (_Bool)overridesPocketMode;
- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (_Bool)inertWhenLocked;
- (_Bool)shouldPlayLightsAndSirens;
- (id)accessoryIconMask;
- (_Bool)showMessagePreview;
- (id)attachmentImage;
- (id)attachmentText;
- (id)iconImage;
- (id)sourceDate;
- (id)suppressedMessage;
- (id)message;
- (id)subtitle;
- (id)title;
- (id)sortDate;
- (_Bool)canShowWhileLocked;
- (id)action;
- (id)initWithListItem:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

