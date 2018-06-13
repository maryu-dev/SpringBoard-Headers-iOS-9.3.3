
#import "NSObject.h"

@class BSDescriptionBuilder, NSString;

@protocol BSDescriptionProviding <NSObject>
- (BSDescriptionBuilder *)succinctDescriptionBuilder;
- (NSString *)succinctDescription;
- (BSDescriptionBuilder *)descriptionBuilderWithMultilinePrefix:(NSString *)arg1;
- (NSString *)descriptionWithMultilinePrefix:(NSString *)arg1;
@end

