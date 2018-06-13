
#import "NSObject.h"

@class _UILegibilityImageSet;

@interface SBIconPageIndicatorImageSetResult : NSObject
{
    _UILegibilityImageSet *_pageIndicatorSet;
    _UILegibilityImageSet *_enabledPageIndicatorSet;
}

- (id)initWithIndicatorSet:(id)arg1 enabledIndicatorSet:(id)arg2;

@end

