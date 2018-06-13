
#import "NSObject.h"

@class SBScreenManager, UIScreen;

@protocol SBScreenConnectionHandler <NSObject>
- (void)screenManager:(SBScreenManager *)arg1 didTriggerConnectionHandlerEvent:(long long)arg2 forScreen:(UIScreen *)arg3;
- (_Bool)screenManager:(SBScreenManager *)arg1 shouldBindConnectionHandlerToScreen:(UIScreen *)arg2;
@end

