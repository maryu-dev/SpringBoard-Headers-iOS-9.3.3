
#import "SBRowInfo.h"

@class BBBulletin, NSDate, SBBBSectionInfo, SBItemInfoLayoutCache, UIColor, UIImage, UIViewController;

@interface SBBBBulletinInfo : SBRowInfo
{
    SBBBSectionInfo *_sectionInfo;
    SBItemInfoLayoutCache *_layoutCache;
    UIImage *_attachmentImage;
    struct CGSize _attachmentImageSize;
    double _secondaryTextHeight;
    _Bool _suppressingMessageForPrivacy;
    _Bool _isCachedMessageSuppressionValid;
    UIViewController *_secondaryContentViewController;
    UIColor *_secondaryTextColor;
    NSDate *_effectiveRecencyDate;
    long long _relevanceDateFormatStyle;
}

- (id)description;
- (void)populateReusableView:(id)arg1;
- (double)heightForReusableViewForNotificationCenterTableViewController:(id)arg1 layoutMode:(long long)arg2 sectionLocation:(long long)arg3;
- (struct CGSize)_effectiveAttachmentImageSize;
- (id)_attachmentImageToDisplay;
- (id)_eventDateLabelForDisplay;
- (id)_eventDateLabel;
- (void)_configureEventDateLabel:(id)arg1;
- (id)_relevanceDateLabel;
- (long long)_bbDateFormatStyle;
- (void)_configureRelevanceDateLabel:(id)arg1;
- (id)_relevanceDateLabelDescription;
- (id)_endDate;
- (id)_secondaryTextColor;
- (id)_secondaryContentView;
- (id)_secondaryTextToDisplay;
- (id)_secondaryText;
- (id)_subtitleTextColor;
- (id)_subtitleTextToDisplay;
- (id)_subtitleText;
- (id)_relevanceDateTextColor;
- (id)_primaryTextColor;
- (id)_primaryText;
- (void)prepareWithCompletion:(id)arg1;
- (void)invalidateCachedLayoutData;
- (Class)reusableViewClass;
- (id)identifier;
@property(readonly, nonatomic) BBBulletin *representedBulletin;

@end

