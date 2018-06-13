
#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface SBAppSwitcherServiceSet : NSObject <NSCopying>
{
    NSMutableArray *_services;
}

- (id)displayItems;
- (id)serviceBundleIdentifiers;
- (id)serviceForBundleIdentifier:(id)arg1;
- (id)serviceAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)removeService:(id)arg1;
- (void)addService:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServices:(id)arg1 zone:(struct _NSZone *)arg2;

@end

