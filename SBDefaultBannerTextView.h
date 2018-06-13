
#import "UIView.h"

#import "SBDateLabelDelegate.h"

@class NSAttributedString, NSString, UIImage, UILabel, UILabel<NCNotificationDateLabel>;

@interface SBDefaultBannerTextView : UIView <SBDateLabelDelegate>
{
    NSAttributedString *_primaryTextAttributedString;
    NSAttributedString *_primaryTextAttributedStringComponent;
    UIImage *_primaryTextAccessoryImageComponent;
    NSAttributedString *_subtitleTextAttributedString;
    NSAttributedString *_secondaryTextAttributedString;
    NSAttributedString *_alternateSecondaryTextAttributedString;
    UILabel<NCNotificationDateLabel> *_relevanceDateLabel;
    double _secondaryTextAlpha;
    double _alternateSecondaryTextAlpha;
}

+ (id)_defaultRelevanceDateFont;
+ (id)_secondaryItalicTextFont;
+ (id)_secondaryTextFont;
+ (id)_primaryTextFont;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)_hasSecondaryText;
- (struct CGSize)_primaryTextSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)_maximumSecondaryTextRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_secondaryTextRectForBounds:(struct CGRect)arg1 attributedString:(id)arg2;
- (struct CGRect)_subtitleTextRectForBounds:(struct CGRect)arg1 attributedString:(id)arg2;
- (struct CGRect)_primaryTextRectForBounds:(struct CGRect)arg1;
- (double)_secondaryTextOriginYForBounds:(struct CGRect)arg1;
- (double)_subtitleTextOriginYForBounds:(struct CGRect)arg1;
- (double)_primaryTextBaselineForBounds:(struct CGRect)arg1;
- (id)_primaryTextAttributedString;
- (void)_invalidatePrimaryTextAttributedString;
- (_Bool)_isItalicizedAttributedString:(id)arg1;
- (id)_attributedStringForSecondaryText:(id)arg1 italicized:(_Bool)arg2;
- (void)setAlternateSecondaryTextAlpha:(double)arg1;
- (void)setSecondaryTextAlpha:(double)arg1;
- (void)dateLabelDidChange:(id)arg1;
- (_Bool)textWillWrapForWidth:(double)arg1;
- (void)setRelevanceDate:(id)arg1;
- (void)setAlternateSecondaryText:(id)arg1 italicized:(_Bool)arg2;
@property(copy, nonatomic) NSString *alternateSecondaryText;
- (void)setSecondaryText:(id)arg1 italicized:(_Bool)arg2;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *subtitleText;
@property(retain, nonatomic) UIImage *primaryTextAccessoryImage;
@property(copy, nonatomic) NSString *primaryText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

