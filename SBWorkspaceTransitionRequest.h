
#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "SBWorkspaceTransitionLayoutDelegate.h"

@class BSAuditToken, FBSDisplay, NSString, NSUUID, SBAlertManager, SBSceneLayoutViewController, SBWorkspace, SBWorkspaceAlertTransitionContext, SBWorkspaceApplicationTransitionContext;

@interface SBWorkspaceTransitionRequest : NSObject <SBWorkspaceTransitionLayoutDelegate, BSDescriptionProviding>
{
    FBSDisplay *_display;
    SBWorkspace *_workspace;
    SBAlertManager *_alertManager;
    NSUUID *_uniqueID;
    NSString *_eventLabel;
    SBSceneLayoutViewController *_appLayoutController;
    id _transitionCompletion;
    _Bool _finalized;
    long long _interfaceOrientation;
    SBWorkspaceApplicationTransitionContext *_applicationContext;
    SBWorkspaceAlertTransitionContext *_alertContext;
    BSAuditToken *_auditToken;
}

- (struct CGRect)transitionContext:(id)arg1 referenceFrameForEntity:(id)arg2;
- (id)originalLayoutStateForTransitionContext:(id)arg1;
- (id)layoutStateForTransitionContext:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_sendResult:(_Bool)arg1;
- (void)declineWithReason:(id)arg1;
- (void)finalize;
- (void)setEventLabelWithFormat:(id)arg1;
- (void)modifyApplicationContext:(id)arg1;
- (void)modifyAlertContext:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithWorkspace:(id)arg1 display:(id)arg2;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

