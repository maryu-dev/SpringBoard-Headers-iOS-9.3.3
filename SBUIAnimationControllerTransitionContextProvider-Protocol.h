
#import "NSObject.h"

@class NSSet;

@protocol SBUIAnimationControllerTransitionContextProvider <NSObject>
@property(readonly, copy, nonatomic) NSSet *deactivatingApps;
@property(readonly, copy, nonatomic) NSSet *activatingApps;
@end

