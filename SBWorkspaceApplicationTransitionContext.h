
#import "SBWorkspaceTransitionContext.h"

@class NSSet, SBWorkspaceApplication, SBWorkspaceEntity;

@interface SBWorkspaceApplicationTransitionContext : SBWorkspaceTransitionContext
{
    id _resultBlock;
    _Bool _background;
    _Bool _fencesAnimations;
    _Bool _alwaysRunsWatchdog;
    _Bool _waitsForSceneUpdates;
    _Bool _sentActivationResult;
    long long _interfaceOrientation;
    long long _preferredInterfaceOrientation;
}

- (double)_watchdogScaleFactorForApplication:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)_realActivatingEntity;
- (id)_display;
- (id)executionContextForApplication:(id)arg1;
- (id)sceneClientSettingsForApplication:(id)arg1 withSceneSettings:(id)arg2;
- (id)sceneTransitionContextForApplication:(id)arg1;
- (id)sceneSettingsForApplication:(id)arg1;
- (id)sceneIdentifierForApplication:(id)arg1;
- (void)finalize;
- (id)previousApplicationForBundleID:(id)arg1;
- (id)previousApplicationForLayoutRole:(long long)arg1;
@property(readonly, copy, nonatomic) NSSet *previousApplications;
- (id)applicationForBundleID:(id)arg1;
- (id)previousEntityForLayoutRole:(long long)arg1;
- (void)setPreviousEntity:(id)arg1 forLayoutRole:(long long)arg2;
- (id)entityForLayoutRole:(long long)arg1;
- (void)setEntity:(id)arg1 forLayoutRole:(long long)arg2;
- (id)applicationForLayoutRole:(long long)arg1;
- (void)setApplication:(id)arg1 forLayoutRole:(long long)arg2;
@property(readonly, copy, nonatomic) NSSet *applications;
- (void)sendActivationResultErrorCode:(long long)arg1;
- (_Bool)hasSentActivationResult;
- (void)dealloc;
- (id)init;

@end

