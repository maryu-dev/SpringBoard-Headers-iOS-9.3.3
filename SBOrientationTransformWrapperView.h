
#import "UIView.h"

@class NSArray, _SBOrientationTransformedContentView;

@interface SBOrientationTransformWrapperView : UIView
{
    _SBOrientationTransformedContentView *_transformedView;
    long long _contentOrientation;
    long long _containerOrientation;
}

- (void)setCenter:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGAffineTransform)_transformForContainerOrientation:(long long)arg1 contentOrientation:(long long)arg2;
- (void)_updateGeometry;
- (void)addContentView:(id)arg1;
@property(readonly, nonatomic) NSArray *contentViews;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;

@end

