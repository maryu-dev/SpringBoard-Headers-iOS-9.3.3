
#import "NSObject.h"

@class FBSDisplay, SBLayoutState;

@protocol SBDisplayLayoutContext <NSObject>
@property(readonly, nonatomic) SBLayoutState *layoutState;
@property(readonly, nonatomic) FBSDisplay *display;
@end

