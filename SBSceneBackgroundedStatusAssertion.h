
#import "NSObject.h"

@class NSSet;

@interface SBSceneBackgroundedStatusAssertion : NSObject
{
    NSSet *_scenes;
    id _invalidationHandler;
}

- (void)invalidate;
- (void)dealloc;
- (id)initWithScenes:(id)arg1 invalidationHandler:(id)arg2;

@end

