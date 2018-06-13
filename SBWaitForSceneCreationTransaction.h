
#import "FBTransaction.h"

#import "BSWatchdogDelegate.h"
#import "FBSceneManagerObserver.h"
#import "FBWindowContextManagerObserver.h"

@class BSWatchdog, FBScene, FBSceneManager, NSString;

@interface SBWaitForSceneCreationTransaction : FBTransaction <FBSceneManagerObserver, FBWindowContextManagerObserver, BSWatchdogDelegate>
{
    FBSceneManager *_sceneManager;
    NSString *_sceneIDToWaitForCreation;
    FBScene *_createdScene;
    BSWatchdog *_waitForContextsWatchdog;
    double _waitForContextsTimeout;
    _Bool _waitForContext;
    FBScene *_scene;
}

- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)windowContextManagerWillStartTrackingContexts:(id)arg1;
- (void)watchdogFired:(id)arg1;
- (void)_invalidateContextWaitWatchdog;
- (void)_setScene:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_begin;
- (void)dealloc;
- (id)initWithSceneID:(id)arg1 waitForContexts:(_Bool)arg2 waitForContextsTimeout:(double)arg3;
- (id)initWithSceneID:(id)arg1 waitForContexts:(_Bool)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

