
#import "SBWorkspaceTransaction.h"

@class NSString, SBWorkspaceEntity;

@interface SBAutoPiPWorkspaceTransaction : SBWorkspaceTransaction
{
    int _pidToPiP;
    SBWorkspaceEntity *_entityToPiP;
    long long _transitionStyle;
    long long _inferredTransitionStyle;
    NSString *_reason;
}

- (long long)_transitionStyle;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (_Bool)_canBeInterrupted;
- (void)_begin;
- (id)initWithTransitionRequest:(id)arg1;

@end

