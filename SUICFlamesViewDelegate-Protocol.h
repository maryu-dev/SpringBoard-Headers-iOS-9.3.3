
#import "NSObject.h"

@class SUICFlamesView;

@protocol SUICFlamesViewDelegate <NSObject>
- (float)audioLevelForFlamesView:(SUICFlamesView *)arg1;

@optional
- (void)flamesViewAuraDidDisplay:(SUICFlamesView *)arg1;
@end

