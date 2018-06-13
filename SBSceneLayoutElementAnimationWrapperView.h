
#import "UIView.h"

#import "SBSceneLayoutInterfaceOrientedView.h"

@class NSString, SBAppView, SBLayoutElement, SBLayoutElementAdornmentView, SBOrientationTransformWrapperView;

@interface SBSceneLayoutElementAnimationWrapperView : UIView <SBSceneLayoutInterfaceOrientedView>
{
    SBLayoutElement *_layoutElement;
    SBAppView *_appView;
    SBOrientationTransformWrapperView *_orientedView;
    SBLayoutElementAdornmentView *_adornmentView;
}

@property(readonly, nonatomic) long long layoutOrientation;
- (void)willMoveToSuperview:(id)arg1;
- (void)invalidate;
- (void)layoutSubviews;
@property(readonly, copy) NSString *description;
- (id)initWithLayoutElement:(id)arg1 appView:(id)arg2 adornmentView:(id)arg3;
- (id)initWithLayoutElement:(id)arg1 appView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

