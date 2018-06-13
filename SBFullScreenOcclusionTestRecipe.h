
#import "NSObject.h"

#import "FBSceneManagerObserver.h"
#import "SBTestRecipe.h"

@class FBScene, NSString, SBWindow;

@interface SBFullScreenOcclusionTestRecipe : NSObject <FBSceneManagerObserver, SBTestRecipe>
{
    SBWindow *_window;
    FBScene *_scene;
    FBScene *_scene2;
    _Bool _doTheThing;
}

+ (id)title;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

