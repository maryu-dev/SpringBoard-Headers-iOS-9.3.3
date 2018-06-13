
#import "NSObject.h"

@class NSString, _UISettings;

@protocol _UISettingsKeyPathObserver <NSObject>
- (void)settings:(_UISettings *)arg1 changedValueForKeyPath:(NSString *)arg2;
@end

