
#import "NSObject.h"

@class NSString;

@protocol SBLayoutElementIdentity <NSObject>
@property(readonly, copy, nonatomic) NSString *layoutIdentifier;
- (_Bool)hasSameIdentityAsElement:(id <SBLayoutElementIdentity>)arg1;
@end

