
#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "SBLayoutContext.h"

@class NSSet, NSString;

@interface SBLayoutState : NSObject <SBLayoutContext, BSDescriptionProviding>
{
    NSSet *_elements;
    long long _interfaceOrientation;
}

+ (long long)_defaultOrientation;
+ (id)initialLayoutState;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_layoutStateForTransitionContext:(id)arg1;
- (_Bool)layoutContainsRole:(long long)arg1;
- (id)elementWithIdentifier:(id)arg1;
- (id)elementWithRole:(long long)arg1;
- (id)layoutStateForTransitionContext:(id)arg1;
- (_Bool)isEqualToLayoutState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)_stateWithElements:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)_initWithElements:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)_initWithElements:(id)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

