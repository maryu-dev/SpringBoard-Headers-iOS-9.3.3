
#import "UIWindow.h"

#import "SBSceneResizeSnakebiteGestureDebugDelegate.h"

@class NSString, SBSceneResizeSnakebiteGestureRecognizer, UIView;

@interface SBSnakebiteDebugWindow : UIWindow <SBSceneResizeSnakebiteGestureDebugDelegate>
{
    UIView *_dividerView;
    UIView *_waitingTouchView;
    UIView *_otherFingerTouchableAreaView;
    UIView *_rightTouchableAreaView;
    SBSceneResizeSnakebiteGestureRecognizer *_snakebite;
}

- (void)debugDrawingUpdatedForSceneResizeGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 gesture:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

