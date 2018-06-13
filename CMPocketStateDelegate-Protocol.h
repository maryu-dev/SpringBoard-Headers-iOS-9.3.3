
#import "NSObject.h"

@class CMPocketStateManager;

@protocol CMPocketStateDelegate <NSObject>
- (void)pocketStateManager:(CMPocketStateManager *)arg1 didUpdateState:(long long)arg2;
@end

