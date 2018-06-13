
#import "NSObject.h"

@class SBUISizeObservingView;

@protocol SBUISizeObservingViewDelegate <NSObject>
- (void)sizeObservingView:(SBUISizeObservingView *)arg1 didChangeSize:(struct CGSize)arg2;
@end

