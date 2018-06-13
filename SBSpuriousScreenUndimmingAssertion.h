
#import "NSObject.h"

@class NSString;

@interface SBSpuriousScreenUndimmingAssertion : NSObject
{
    NSString *_identifier;
}

+ (id)debugDescription;
+ (_Bool)isAnyActive;
+ (void)_accessListWithBlock:(id)arg1;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

