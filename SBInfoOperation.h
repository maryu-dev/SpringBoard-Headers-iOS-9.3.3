
#import "NSObject.h"

@class NSString;

@interface SBInfoOperation : NSObject
{
    id _operand;
    NSString *_label;
}

+ (id)operationWithOperand:(id)arg1 label:(id)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithOperand:(id)arg1 label:(id)arg2;

@end

