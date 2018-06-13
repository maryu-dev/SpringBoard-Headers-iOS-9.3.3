
#import "NSObject.h"

@class NSLock, NSSet, SBIconModel;

@interface SBIconVisibilityService : NSObject
{
    SBIconModel *_iconModel;
    NSLock *_iconStateDisplayIdentifiersLock;
    NSSet *_iconStateDisplayIdentifiers;
}

- (void)_visibleIdentifiersChanged:(id)arg1;
- (id)iconStateDisplayIdentifiers;
- (void)dealloc;
- (id)initWithIconModel:(id)arg1;

@end

