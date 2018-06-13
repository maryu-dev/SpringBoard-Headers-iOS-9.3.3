
#import "NSObject.h"

@interface SBItemInfoLayoutCache : NSObject
{
    double _cachedViewHeight;
    struct CGSize _referenceSize;
    long long _layoutMode;
}

- (void)invalidateCache;
- (double)viewHeightWithReferenceSize:(struct CGSize)arg1 layoutMode:(long long)arg2 generateBlock:(id)arg3;
- (_Bool)_isLayoutValidWithReferenceSize:(struct CGSize)arg1 layoutMode:(long long)arg2;

@end

