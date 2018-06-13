
#import "UIView.h"

@class BSUIAnimationFactory;

@interface SBZoomableCrossfadeView : UIView
{
    BSUIAnimationFactory *_animationFactory;
    UIView *_startView;
    UIView *_endView;
    _Bool _translucent;
    _Bool _crossfaded;
    _Bool _allowsGroupOpacityDuringCrossfade;
    _Bool _adaptsAnimationFactoryTimingFunction;
}

+ (id)crossfadeViewWithStartView:(id)arg1 endView:(id)arg2 translucent:(_Bool)arg3;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)crossfadeWithCompletion:(id)arg1;
- (void)layoutSubviews;
- (id)_initWithStartView:(id)arg1 endView:(id)arg2 translucent:(_Bool)arg3;

@end

