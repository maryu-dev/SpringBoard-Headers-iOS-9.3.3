
#import "BSAbstractDefaultDomain.h"

@class NSArray, NSString;

@interface SBExternalGlobalDefaults : BSAbstractDefaultDomain
{
}

+ (_Bool)__useDynamicMethodResolution;
- (void)flushExternalCaches;
- (void)removeFormattedPhoneNumberFromGlobalPreferences;
@property(retain, nonatomic) NSArray *keyboards;
@property(retain, nonatomic) NSArray *languages;
@property(retain, nonatomic) NSString *locale;
- (void)synchronizeGlobalPreferences;
- (id)init;

@end

