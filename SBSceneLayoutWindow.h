
#import "SBSecureWindow.h"

@interface SBSceneLayoutWindow : SBSecureWindow
{
}

+ (_Bool)sb_autorotates;
- (id)layoutCoordinateSpace;
- (id)referenceCoordinateSpace;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

