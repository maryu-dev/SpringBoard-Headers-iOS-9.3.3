
#import "NSObject.h"

@class SBInfoOperand;

@interface SBCompoundInfoOperand : NSObject
{
    SBInfoOperand *_activeOperand;
    SBInfoOperand *_referenceOperand;
}

+ (id)compoundOperandWithOperand:(id)arg1 referenceOperand:(id)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic, getter=isSectionOperand) _Bool sectionOperand;
- (id)initWithOperand:(id)arg1 operand:(id)arg2;

@end

