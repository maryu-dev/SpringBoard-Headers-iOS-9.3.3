
#import "UIView.h"

#import "SBUIProgressiveBlur.h"

@class NSString, SBWallpaperEffectView, _SBSearchBackdropView;

@interface SBSearchBackdropView : UIView <SBUIProgressiveBlur>
{
    _SBSearchBackdropView *_backdropView;
    SBWallpaperEffectView *_effectView;
    UIView *_tintView;
    _Bool _needToEnsureThatWeUpdateBackdropAtLeastOnce;
}

- (void)transitionCompleted;
- (void)setTransitionProgress:(double)arg1;
- (void)prepareForTransition;
- (_Bool)useHighQualityGraphics;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

