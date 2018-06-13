
#import "UIControl.h"

@class NSMutableArray, NSString, UIImageView, UIView;

@interface SBNotificationsClearButton : UIControl
{
    NSString *_title;
    UIImageView *_circleImageView;
    UIImageView *_xImageView;
    UIImageView *_compositeCircleXImageView;
    UIView *_highlightView;
    NSMutableArray *_glyphImageViews;
    unsigned long long _animatingTransitionCount;
    long long _graphicsQuality;
    long long _clearButtonState;
}

+ (id)_xImageWithGraphicsQuality:(long long)arg1;
+ (id)_circleImageWithGraphicsQuality:(long long)arg1;
+ (id)compositeCircleXImageWithGraphicsQuality:(long long)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)_lazyHighlightView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_layoutSubviewsForState:(long long)arg1;
- (id)_glyphFramesWithCircleFrame:(struct CGRect)arg1 forState:(long long)arg2;
- (struct CGRect)_xFrameWithCircleFrame:(struct CGRect)arg1 forState:(long long)arg2;
- (struct CGRect)_circleFrameForState:(long long)arg1;
- (struct CGRect)_circleBoundsForState:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)_unrolledCircleBounds;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)_glyphImagesFromAttributedString:(id)arg1;
- (id)compositeCircleXImage;
- (id)_xImage;
- (id)_circleImage;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 graphicsQuality:(long long)arg2;

@end

