
#import "SBMainWorkspaceEntity.h"

@interface SBMainWorkspaceSideSwitcherEntity : SBMainWorkspaceEntity
{
}

- (Class)viewControllerClass;
- (_Bool)isSideSwitcherEntity;
- (_Bool)_supportsDynamicResizing;
- (_Bool)_supportsPresentationAtAnySize;
- (_Bool)_supportsLayoutRole:(long long)arg1;
- (id)init;

@end

