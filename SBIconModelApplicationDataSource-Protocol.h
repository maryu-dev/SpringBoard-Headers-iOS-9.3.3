
#import "NSObject.h"

@class NSArray, NSDictionary, NSSet;

@protocol SBIconModelApplicationDataSource <NSObject>
- (NSSet *)firstPageLeafIdentifiers;
- (NSDictionary *)defaultIconState;
- (NSArray *)allApplications;
@end

