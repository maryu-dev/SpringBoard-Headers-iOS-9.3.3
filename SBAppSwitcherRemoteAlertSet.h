
#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray, NSMutableSet;

@interface SBAppSwitcherRemoteAlertSet : NSObject <NSCopying>
{
    NSMutableArray *_alerts;
    NSMutableSet *_placeholderIdentifiers;
}

- (id)placeholderDisplayItems;
- (id)placeholderBundleIdentifiers;
- (id)displayItems;
- (id)serviceBundleIdentifiers;
- (id)alertForDisplayItem:(id)arg1;
- (id)alertForBundleIdentifier:(id)arg1;
- (id)alertAtIndex:(unsigned long long)arg1;
- (_Bool)containsAlert:(id)arg1;
- (unsigned long long)count;
- (void)removePlaceholderForIdentifier:(id)arg1;
- (void)addPlaceholderForIdentifier:(id)arg1;
- (void)removeRemoteAlert:(id)arg1;
- (void)addRemoteAlert:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAlertSet:(id)arg1 zone:(struct _NSZone *)arg2;

@end

