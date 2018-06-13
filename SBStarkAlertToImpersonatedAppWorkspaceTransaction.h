
#import "SBStarkAlertToAppWorkspaceTransaction.h"

@class SBAlert, SBWorkspaceAlert;

@interface SBStarkAlertToImpersonatedAppWorkspaceTransaction : SBStarkAlertToAppWorkspaceTransaction
{
    SBAlert *_fromAlert;
    SBWorkspaceAlert *_toAlert;
}

- (void)_activateAlert;
- (id)_effectiveTopEntity;
- (void)_alertDidDeactivate;
- (void)_beginAnimation;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@end

