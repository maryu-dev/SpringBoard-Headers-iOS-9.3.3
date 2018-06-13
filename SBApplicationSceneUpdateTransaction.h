
#import "FBApplicationUpdateScenesTransaction.h"

@class FBSDisplay, FBSSceneClientSettings<UIApplicationSceneClientSettings>, NSString, SBWorkspaceApplication, SBWorkspaceApplicationTransitionContext, UIApplicationSceneTransitionContext, UIMutableApplicationSceneSettings;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction
{
    SBWorkspaceApplication *_appContext;
    SBWorkspaceApplicationTransitionContext *_transitionContext;
    FBSDisplay *_display;
    NSString *_sceneIdentifier;
    UIMutableApplicationSceneSettings *_settings;
    UIApplicationSceneTransitionContext *_sceneTransitionContext;
    FBSSceneClientSettings<UIApplicationSceneClientSettings> *_clientSettings;
    _Bool _suspendedActivation;
    _Bool _shouldSendActivationResult;
}

- (void)_sendActivationResultWithSuccess:(_Bool)arg1;
- (void)_clearApplicationActivationState;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)_noteWillCommitUpdateForScene:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_performSynchronizedCommit:(id)arg1;
- (void)_didComplete;
- (id)initWithApplication:(id)arg1 transitionRequest:(id)arg2;

@end

