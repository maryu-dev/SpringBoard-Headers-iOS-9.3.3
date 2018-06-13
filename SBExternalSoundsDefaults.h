
#import "BSAbstractDefaultDomain.h"

@interface SBExternalSoundsDefaults : BSAbstractDefaultDomain
{
}

- (void)synchronizeSoundsPreferences;
- (void)_bindAndRegisterDefaults;
- (id)init;


@end

