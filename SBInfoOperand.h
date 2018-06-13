
#import "NSObject.h"

@class SBRowInfo, SBSectionInfo;

@interface SBInfoOperand : NSObject
{
    SBSectionInfo *_section;
    SBRowInfo *_row;
}

+ (id)operandWithSection:(id)arg1 row:(id)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic, getter=isSectionOperand) _Bool sectionOperand;
- (id)initWithSection:(id)arg1 row:(id)arg2;

@end

