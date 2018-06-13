
#import "NSObject.h"

@class SBIconPageIndicatorImageSetResult, _UILegibilitySettings;

@interface SBIconPageIndicatorImageSetCache : NSObject
{
    _UILegibilitySettings *_legibilitySettings;
    SBIconPageIndicatorImageSetResult *_indicatorImageSetResults;
    SBIconPageIndicatorImageSetResult *_searchImageSetResults;
}

+ (id)homescreenPageIndicatorImageSetCache;
- (id)_emptyPageIndicatorSet;
- (id)searchIndicatorImageSetForLegibilitySettings:(id)arg1;
- (id)pageIndicatorImageSetForLegibilitySettings:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;

@end

