
#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "SBDisplayLayoutContext.h"

@class BSAnimationSettings, FBSDisplay, NSMutableDictionary, NSSet, NSString, SBLayoutState, SBWorkspaceTransitionRequest;

@interface SBWorkspaceTransitionContext : NSObject <SBDisplayLayoutContext, BSDescriptionProviding>
{
    NSMutableDictionary *_entities;
    NSMutableDictionary *_previousEntities;
    _Bool _finalized;
    SBLayoutState *_layoutState;
    SBLayoutState *_previousLayoutState;
    _Bool _animationDisabled;
    BSAnimationSettings *_animationSettings;
    SBWorkspaceTransitionRequest *_request;
    id <SBWorkspaceTransitionLayoutDelegate> _layoutDelegate;
}

+ (id)context;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, nonatomic) FBSDisplay *display;
- (id)_display;
- (void)finalize;
- (id)previousEntityForIdentifier:(id)arg1;
- (id)previousEntityForKey:(id)arg1;
- (void)setPreviousEntity:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *previousEntities;
- (id)entityForIdentifier:(id)arg1;
- (id)entityForKey:(id)arg1;
- (void)setEntity:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *entities;
@property(readonly, copy) NSString *description;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

