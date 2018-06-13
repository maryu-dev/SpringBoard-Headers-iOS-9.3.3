
#import "NSObject.h"

#import "NSCopying.h"

@class SBLayoutElementViewController;

@interface SBAppResizeElementControllerCacheKey : NSObject <NSCopying>
{
    SBLayoutElementViewController *_elementViewController;
    struct CGSize _elementViewSize;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithLayoutElementViewController:(id)arg1;

@end

