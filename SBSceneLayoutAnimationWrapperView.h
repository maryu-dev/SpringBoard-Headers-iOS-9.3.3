
#import "UIView.h"

#import "SBSceneLayoutReferenceOrientedView.h"

@class NSArray, NSString;

@interface SBSceneLayoutAnimationWrapperView : UIView <SBSceneLayoutReferenceOrientedView>
{
    long long _layoutOrientation;
    long long _referenceOrientation;
}

- (void)crossfadeWithCompletion:(id)arg1;
- (void)invalidate;
- (id)elementWrapperViewForLayoutRole:(long long)arg1;
@property(readonly, nonatomic) NSArray *elementWrapperViews;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

