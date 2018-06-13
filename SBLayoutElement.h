
#import "NSObject.h"

#import "SBLayoutElementDescriptor.h"
#import "SBWorkspaceEntityGenerating.h"

@class NSString;

@interface SBLayoutElement : NSObject <SBLayoutElementDescriptor, SBWorkspaceEntityGenerating>
{
    NSString *_identifier;
    long long _role;
    id _entityGenerator;
    unsigned long long _supportedLayoutRoles;
    unsigned long long _layoutAttributes;
    Class _viewControllerClass;
}

+ (id)elementWithDescriptor:(id)arg1 role:(long long)arg2;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)workspaceEntity;
- (_Bool)hasLayoutAttributes:(unsigned long long)arg1;
- (_Bool)supportsLayoutRole:(long long)arg1;
@property(readonly, nonatomic) long long layoutRole;
- (_Bool)hasSameIdentityAsElement:(id)arg1;
@property(readonly, copy, nonatomic) NSString *layoutIdentifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 role:(long long)arg2 supportedRoles:(unsigned long long)arg3 attributes:(unsigned long long)arg4 viewControllerClass:(Class)arg5 entityGenerator:(id)arg6;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

