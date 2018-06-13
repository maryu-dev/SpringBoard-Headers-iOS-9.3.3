
#import "UITextField.h"

@class _UILegibilitySettings, _UILegibilityView;

@interface SBFolderTitleTextField : UITextField
{
    _Bool _showingEditUI;
    _UILegibilityView *_legibilityView;
    _Bool _allowsEditing;
    _UILegibilitySettings *_legibilitySettings;
}

+ (id)_clearButtonImage;
+ (id)_editBackgroundImage;
+ (void)warmupIfNecessary;
- (id)_clearButtonImage;
- (id)_backgroundImage;
- (void)_updateLegibility;
- (double)_legibilityStrength;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_textRectForBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) double fontSize;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)_updateLegibilityView;
- (void)setShowsEditUI:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

