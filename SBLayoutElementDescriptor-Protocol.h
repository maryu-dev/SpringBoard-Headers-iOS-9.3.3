
#import "SBLayoutElementIdentity.h"

@protocol SBLayoutElementDescriptor <SBLayoutElementIdentity>
@property(readonly, copy, nonatomic) id entityGenerator;
@property(readonly, nonatomic) Class viewControllerClass;
@property(readonly, nonatomic) unsigned long long layoutAttributes;
@property(readonly, nonatomic) unsigned long long supportedLayoutRoles;
@property(readonly, nonatomic) long long layoutRole;
- (_Bool)hasLayoutAttributes:(unsigned long long)arg1;
- (_Bool)supportsLayoutRole:(long long)arg1;
@end

