
#import "SBStarkWorkspaceTransaction.h"

@class SBAlert;

@interface SBStarkAlertToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction
{
    _Bool _activationTriggeredFromStark;
    SBAlert *_activatingAlert;
    SBAlert *_deactivatingAlert;
}

- (void)_begin;
- (id)debugDescription;
- (id)initWithTransitionRequest:(id)arg1;

@end

