
#import "NSObject.h"

@class NSDate;

@interface SBWorkItem : NSObject
{
    id _workBlock;
    NSDate *_creationDate;
}

- (id)initWithWork:(id)arg1;

@end

