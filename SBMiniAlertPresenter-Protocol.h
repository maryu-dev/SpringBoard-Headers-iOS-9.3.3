
#import "NSObject.h"

@class FBScene, NSString;

@protocol SBMiniAlertPresenter <NSObject>
- (FBScene *)mainScene;
- (_Bool)isSameExecutableAsPresenter:(id <SBMiniAlertPresenter>)arg1;
- (NSString *)presenterIdentifier;
@end

