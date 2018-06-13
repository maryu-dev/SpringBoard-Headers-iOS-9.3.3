
#import "NSObject.h"

@protocol _SBFakeBlur <NSObject>
@property(nonatomic) _Bool fullscreen;
@property(nonatomic) id <_SBFakeBlurObserver> observer;
- (long long)effectiveStyle;
- (void)requestStyle:(long long)arg1;
@end

