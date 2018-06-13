
#import "NSObject.h"

@class SBLayoutElementContainerView, SBLayoutState;

@protocol SBLayoutElementContainerViewDelegate <NSObject>
- (SBLayoutState *)layoutStateForLayoutElementContainingView:(SBLayoutElementContainerView *)arg1;
- (_Bool)shouldAllowSwipeInDimmingViewAtStartLocation:(struct CGPoint)arg1 inLayoutElementContainingView:(SBLayoutElementContainerView *)arg2;
- (void)handleReturnActionForLayoutElementContainingView:(SBLayoutElementContainerView *)arg1;
@end

