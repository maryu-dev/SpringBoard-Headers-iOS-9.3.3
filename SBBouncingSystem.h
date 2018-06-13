
#import "NSObject.h"

#import "_UIDynamicReferenceSystem.h"

@class NSString;

@interface SBBouncingSystem : NSObject <_UIDynamicReferenceSystem>
{
    struct CGRect _bounds;
}


@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

