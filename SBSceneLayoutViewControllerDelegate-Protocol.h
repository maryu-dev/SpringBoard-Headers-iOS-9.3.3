
#import "NSObject.h"

@class SBSceneLayoutViewController;

@protocol SBSceneLayoutViewControllerDelegate <NSObject>
- (void)sceneLayoutController:(SBSceneLayoutViewController *)arg1 noteHasVisibleElements:(_Bool)arg2;
@end

