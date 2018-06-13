
#import "SBWorkspaceEntity.h"

#import "SBProcessSettings.h"

@class NSSet, NSString, SBApplication, SBProcessSettings;

@interface SBWorkspaceApplication : SBWorkspaceEntity <SBProcessSettings>
{
    SBApplication *_application;
    NSSet *_actions;
    SBProcessSettings *_processSettings;
}

+ (id)entityForApplication:(id)arg1 actions:(id)arg2;
+ (id)entityForApplication:(id)arg1;
+ (id)entityGenerator;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (Class)viewControllerClass;
- (id)workspaceApplication;
- (_Bool)isApplicationEntity;
- (long long)_mainDisplayPreferredInterfaceOrientation;
- (void)_setMainDisplayPreferredInterfaceOrientation:(long long)arg1;
- (id)_generator;
- (_Bool)_supportsDynamicResizing;
- (_Bool)_supportsPresentationAtAnySize;
- (_Bool)_supportsLayoutRole:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)representedDisplay;
- (void)clearProcessSettings;
- (void)applyProcessSettings:(id)arg1;
- (id)copyProcessSettings;
- (id)objectForProcessSetting:(long long)arg1;
- (void)setObject:(id)arg1 forProcessSetting:(long long)arg2;
- (_Bool)boolForProcessSetting:(long long)arg1;
- (long long)flagForProcessSetting:(long long)arg1;
- (void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;
- (id)initWithApplication:(id)arg1 actions:(id)arg2;
- (id)initWithApplication:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

