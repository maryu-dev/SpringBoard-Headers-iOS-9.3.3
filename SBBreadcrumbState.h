
#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSArray, NSString;

@interface SBBreadcrumbState : NSObject <BSDescriptionProviding>
{
    NSArray *_breadcrumbIdentifiers;
}

+ (id)initialState;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)containsIdentifer:(id)arg1;
- (id)breadcrumbStateAfterPoppingIdentifier:(id)arg1;
- (id)breadcrumbStateAfterPoppingLastIdentifier;
- (id)breadcrumbStateAfterPushingIdentifier:(id)arg1;
- (id)_stateWithIdentifiers:(id)arg1;
- (id)_initWithIdentifiers:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

