
#import "BSAbstractDefaultDomain.h"

@class NSArray;

@interface SBExternalOperatorDefaults : BSAbstractDefaultDomain
{
}

- (void)synchronizeOperatorPreferences;
- (void)_bindAndRegisterDefaults;
- (id)init;


@end

