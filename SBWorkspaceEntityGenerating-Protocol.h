
#import "NSObject.h"

@class SBWorkspaceEntity;

@protocol SBWorkspaceEntityGenerating <NSObject>
- (SBWorkspaceEntity *)workspaceEntity;
@end

