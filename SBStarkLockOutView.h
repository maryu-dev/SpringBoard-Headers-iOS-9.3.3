
#import "UIView.h"

@class NSArray, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface SBStarkLockOutView : UIView
{
    id <SBStarkSessionConfiguring> _configuration;
    UILabel *_titleLabel;
    double _titleAscender;
    double _titleDescender;
    UIImageView *_imageView;
    struct CGSize _imageSize;
    UILabel *_messageLabel;
    double _messageAscender;
    double _messageDescender;
    UIButton *_backToOEMButton;
    UITapGestureRecognizer *_backToOEMGestureRecognizer;
    NSArray *_baselineSeparations;
}

- (void)_sizeMessageToFitInFrame:(struct CGRect)arg1;
- (id)_messageFontOfSize:(double)arg1;
- (void)_sizeTitleToFitInFrame:(struct CGRect)arg1;
- (id)_titleFontOfSize:(double)arg1;
- (id)preferredFocusedItem;
- (void)layoutSubviews;
- (void)_backToOEM;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 title:(id)arg3 image:(id)arg4 message:(id)arg5 baselineSeparations:(id)arg6;

@end

