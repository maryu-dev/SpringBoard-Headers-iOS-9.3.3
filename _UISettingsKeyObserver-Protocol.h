
#import "NSObject.h"

@class NSString, _UISettings;

@protocol _UISettingsKeyObserver <NSObject>
- (void)settings:(_UISettings *)arg1 changedValueForKey:(NSString *)arg2;
@end

