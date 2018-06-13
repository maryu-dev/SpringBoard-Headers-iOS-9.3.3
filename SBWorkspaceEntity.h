
#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"
#import "SBActivationSettings.h"
#import "SBDeactivationSettings.h"
#import "SBLayoutElementProviding.h"

@class NSString, SBActivationSettings, SBDeactivationSettings;

@interface SBWorkspaceEntity : NSObject <NSCopying, SBActivationSettings, SBDeactivationSettings, BSDescriptionProviding, SBLayoutElementProviding>
{
    NSString *_identifier;
    long long _layoutRole;
    SBActivationSettings *_activationSettings;
    SBDeactivationSettings *_deactivationSettings;
    long long _mainDisplayPreferredInterfaceOrientation;
}

+ (id)entity;
- (id)layoutElementForRole:(long long)arg1;
- (id)layoutElement;
@property(readonly, copy, nonatomic) id entityGenerator;
@property(readonly, nonatomic) Class viewControllerClass;
- (_Bool)hasLayoutAttributes:(unsigned long long)arg1;
- (_Bool)supportsLayoutRole:(long long)arg1;
@property(readonly, nonatomic) unsigned long long layoutAttributes;
@property(readonly, nonatomic) unsigned long long supportedLayoutRoles;
- (_Bool)hasSameIdentityAsElement:(id)arg1;
@property(readonly, copy, nonatomic) NSString *layoutIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_generator;
- (_Bool)_supportsDynamicResizing;
- (_Bool)_supportsPresentationAtAnySize;
- (_Bool)_supportsLayoutRole:(long long)arg1;
- (void)setPreferredInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2;
- (long long)preferredInterfaceOrientationOnDisplay:(id)arg1;
- (_Bool)isAnalagousToEntity:(id)arg1;
@property(readonly, nonatomic) __weak id <SBDisplay> representedDisplay;
@property(readonly, copy) NSString *description;
- (void)clearDeactivationSettings;
- (void)applyDeactivationSettings:(id)arg1;
- (id)copyDeactivationSettings;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (_Bool)boolForDeactivationSetting:(unsigned int)arg1;
- (long long)flagForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)clearActivationSettings;
- (void)applyActivationSettings:(id)arg1;
- (id)copyActivationSettings;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (_Bool)boolForActivationSetting:(unsigned int)arg1;
- (long long)flagForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;
- (id)initWithDisplayChangeSettings:(id)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

