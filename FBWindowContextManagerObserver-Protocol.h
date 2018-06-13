
#import "FBSceneLayerManagerObserver.h"

@class FBWindowContextManager;

@protocol FBWindowContextManagerObserver <FBSceneLayerManagerObserver>

@optional
- (void)windowContextManager:(FBWindowContextManager *)arg1 didRepositionContext:(struct FBSceneLayer *)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4;
- (void)windowContextManagerDidStopTrackingContexts:(FBWindowContextManager *)arg1;
- (void)windowContextManagerWillStartTrackingContexts:(FBWindowContextManager *)arg1;
@end

