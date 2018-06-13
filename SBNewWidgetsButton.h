
#import "UIButton.h"

@class NSString, SBNotificationControlColorSettings;

@interface SBNewWidgetsButton : UIButton
{
    UIButton *_vibrantButton;
    UIButton *_overlayButton;
    SBNotificationControlColorSettings *_colorSettings;
    unsigned long long _badgeNumber;
    NSString *_text;
    NSString *_numberText;
}

- (struct CGSize)_numberLabelSizeForText:(id)arg1;
- (id)_numberImageForNumberText:(id)arg1 withAttributes:(id)arg2;
- (id)_numberAttributedStringWithNumberText:(id)arg1 attributes:(id)arg2;
- (id)_attributedStringWithColor:(id)arg1;
- (id)_numberTextAttributesWithColor:(id)arg1;
- (id)_textAttributesWithColor:(id)arg1;
- (id)_numberFont;
- (id)_textFont;
- (void)_setAttributeTitleForButton:(id)arg1 withSettings:(id)arg2;
- (void)_updateButtons;
- (void)_buttonStateChanged:(id)arg1;
- (void)_buttonPushed:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateForContentCategorySizeChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithColorSettings:(id)arg1;

@end

