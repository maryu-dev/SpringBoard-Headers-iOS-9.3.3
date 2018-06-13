
#import "NSObject.h"

@interface SBLineFragment : NSObject
{
    unsigned long long _index;
    double _lineWidth;
    struct _NSRange _range;
}

+ (id)fragmentWithIndex:(unsigned long long)arg1 length:(unsigned long long)arg2 lineWidth:(double)arg3;
- (id)description;

@end

