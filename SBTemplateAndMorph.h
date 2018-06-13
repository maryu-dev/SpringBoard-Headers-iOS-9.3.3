
#import "NSObject.h"

@class SBPolygon, SBTouchTemplate;

@interface SBTemplateAndMorph : NSObject
{
    SBPolygon *_morphedCandidate;
    SBTouchTemplate *_touchTemplate;
}

- (id)initWithTemplate:(id)arg1 morph:(id)arg2;

@end

