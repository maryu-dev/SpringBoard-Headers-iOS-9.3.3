
#import "_SBFVibrantTableViewCell.h"

#import "SBDateLabelDelegate.h"
#import "SBModalLayoutCaching.h"

@class NSString, UIButton, UIColor, UIImage, UIImageView, UILabel, UILabel<NCNotificationDateLabel>, UIView, UIViewController;

@interface SBNotificationCell : _SBFVibrantTableViewCell <SBDateLabelDelegate, SBModalLayoutCaching>
{
    UIView *_realContentView;
    UIImageView *_iconImageView;
    UILabel *_primaryLabel;
    UILabel *_subtitleLabel;
    UILabel *_secondaryLabel;
    UILabel *_relevanceDateLabel;
    UILabel<NCNotificationDateLabel> *_eventDateLabel;
    UIButton *_actionButton;
    UIImageView *_attachmentView;
    struct CGSize _attachmentSize;
    long long _layoutMode;
    UIViewController *_secondaryContentViewController;
    _Bool _secondaryTextNumberOfLinesIsUpperBound;
    unsigned long long _secondaryTextNumberOfLines;
    double _secondaryTextHeight;
    UIImage *_icon;
}

+ (double)paddingBetweenTitleAndRelevanceDate;
+ (double)contentWidthWithRowWidth:(double)arg1 andAttachmentSize:(struct CGSize)arg2 forLayoutMode:(long long)arg3;
+ (void)setupEventDateLabel:(id)arg1;
+ (void)setupRelevanceDateLabel:(id)arg1;
+ (id)defaultColorForEventDate;
+ (id)defaultColorForRelevanceDate;
+ (id)defaultColorForSecondaryText;
+ (id)defaultColorForSubtitleText;
+ (id)defaultColorForPrimaryText;
+ (id)defaultFontForEventDate;
+ (id)defaultFontForRelevanceDate;
+ (id)defaultFontForSecondaryText;
+ (id)defaultFontForSubtitleText;
+ (id)defaultFontForPrimaryText;
+ (id)preferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (double)actionButtonPaddingLeft;
+ (double)secondLineBaselineOffsetFromFirstLine;
+ (double)firstLineBaselineOffsetFromTop;
+ (double)firstLineBaselineOffsetFromTopNoIcon;
- (void)_setShouldHaveFullLengthBottomSeparator:(_Bool)arg1;
- (void)_setShouldHaveFullLengthTopSeparator:(_Bool)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) _Bool shouldVerticallyCenterContent;
@property(nonatomic) double attachmentAlpha;
@property(nonatomic) double iconAlpha;
@property(nonatomic) double eventDateAlpha;
@property(nonatomic) double relevanceDateAlpha;
@property(nonatomic) double secondaryTextAlpha;
@property(nonatomic) double subtitleTextAlpha;
@property(nonatomic) double primaryTextAlpha;
- (void)setAttachmentImage:(id)arg1;
- (void)dateLabelDidChange:(id)arg1;
@property(retain, nonatomic) UIColor *eventDateColor;
@property(retain, nonatomic) UIColor *relevanceDateColor;
- (void)setSecondaryTextNumberOfLines:(unsigned long long)arg1 treatAsUpperBound:(_Bool)arg2;
@property(retain, nonatomic) UIColor *secondaryTextColor;
@property(retain, nonatomic) UIColor *subtitleTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor;
@property(retain, nonatomic) UILabel<NCNotificationDateLabel> *eventDateLabel;
@property(retain, nonatomic) UILabel *relevanceDateLabel;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *subtitleText;
@property(copy, nonatomic) NSString *primaryText;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(readonly, nonatomic) struct CGRect contentBounds;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

