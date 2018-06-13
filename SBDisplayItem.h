
#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SBDisplayItem : NSObject <NSCopying>
{
    NSString *_uniqueStringRepresentation;
    struct NSString *_type;
    NSString *_displayIdentifier;
}

+ (id)sideSwitcherDisplayItem;
+ (id)homeScreenDisplayItem;
+ (id)displayItemWithType:(struct NSString *)arg1 displayIdentifier:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)uniqueStringRepresentation;
- (id)_calculateUniqueStringRepresentation;
- (_Bool)isSideSwitcherDisplayItem;
- (_Bool)isHomeScreenDisplayItem;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(struct NSString *)arg1 displayIdentifier:(id)arg2;
- (id)init;

@end

