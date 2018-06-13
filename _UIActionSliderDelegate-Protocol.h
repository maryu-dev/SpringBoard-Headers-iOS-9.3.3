
#import "NSObject.h"

@class _UIActionSlider;

@protocol _UIActionSliderDelegate <NSObject>

@optional
- (void)actionSliderDidCancelSlide:(_UIActionSlider *)arg1;
- (void)actionSliderDidCompleteSlide:(_UIActionSlider *)arg1;
- (void)actionSlider:(_UIActionSlider *)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidBeginSlide:(_UIActionSlider *)arg1;
@end

