
#import "NSObject.h"

@class NSString;

@protocol UIStatusBarStateProvider <NSObject>
- (void)getStatusBarData:(id *)arg1;
- (void)removeStatusBarStateObserver:(id <UIStatusBarStateObserver>)arg1;
- (void)addStatusBarStateObserver:(id <UIStatusBarStateObserver>)arg1;

@optional
- (NSString *)doubleHeightStatusStringForStyle:(long long)arg1;
@end

