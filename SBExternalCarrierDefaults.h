
#import "BSAbstractDefaultDomain.h"

@class NSArray, NSString;

@interface SBExternalCarrierDefaults : BSAbstractDefaultDomain
{
}

- (void)synchronizeTelephonyPreferences;
- (void)_bindAndRegisterDefaults;
- (id)init;


@end

