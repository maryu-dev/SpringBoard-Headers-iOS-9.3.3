
#import "NSObject.h"

@class NSDictionary;

@protocol SBIconModelStore <NSObject>
- (NSDictionary *)loadDesiredIconState:(id *)arg1;
- (NSDictionary *)loadCurrentIconState:(id *)arg1;
- (_Bool)deleteDesiredIconState:(id *)arg1;
- (_Bool)deleteCurrentIconState:(id *)arg1;
- (_Bool)saveDesiredIconState:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)saveCurrentIconState:(NSDictionary *)arg1 error:(id *)arg2;
@end

