
#import "BSAbstractDefaultDomain.h"

@class NSString;

@interface SBExternalSetupDefaults : BSAbstractDefaultDomain
{
}

- (void)synchronizeBuddyPreferences;
- (void)_bindAndRegisterDefaults;
- (id)init;


@end

