
#import "SBWorkspaceEntity.h"

@class SBWorkspaceApplication;

@interface SBStarkWorkspaceNowPlayingEntity : SBWorkspaceEntity
{
    SBWorkspaceApplication *_application;
}

+ (id)entityForApplication:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (Class)viewControllerClass;
- (id)_generator;
- (_Bool)_supportsLayoutRole:(long long)arg1;
- (id)workspaceApplication;
- (_Bool)isStarkNowPlayingEntity;
- (id)initWithDisplayChangeSettings:(id)arg1;
- (id)initWithApplication:(id)arg1;

@end

