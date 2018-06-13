
#import "NSObject.h"

@class SBStarkScreenManager;

@protocol SBStarkScreenManagerObserver <NSObject>

@optional
- (void)starkScreenManagerDidChangeCurrentController:(SBStarkScreenManager *)arg1;
- (void)starkScreenManagerWillChangeCurrentController:(SBStarkScreenManager *)arg1;
@end

