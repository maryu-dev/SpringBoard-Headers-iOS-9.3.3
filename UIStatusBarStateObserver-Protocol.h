
#import "NSObject.h"

@protocol UIStatusBarStateObserver <NSObject>
- (void)statusBarStateProvider:(id <UIStatusBarStateProvider>)arg1 didPostStatusBarData:(const id *)arg2 withActions:(int)arg3;

@optional
- (void)statusBarStateProvider:(id <UIStatusBarStateProvider>)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2;
@end

