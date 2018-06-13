
#import "SBSystemGestureRecognizerDelegate.h"

@class NSArray;

@protocol SBTouchTemplateGestureRecognizerDelegate <SBSystemGestureRecognizerDelegate>

@optional
- (void)matchFailedWithMorphs:(NSArray *)arg1;
@end

