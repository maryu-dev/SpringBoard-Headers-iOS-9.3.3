
#import "NSObject.h"

@class NSSet, SBApplicationRestrictionController;

@protocol SBApplicationRestrictionObserver <NSObject>
- (void)applicationRestrictionController:(SBApplicationRestrictionController *)arg1 didUpdateVisibleTags:(NSSet *)arg2 hiddenTags:(NSSet *)arg3;
@end

