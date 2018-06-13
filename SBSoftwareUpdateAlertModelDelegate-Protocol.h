
#import "NSObject.h"

@class SBSoftwareUpdateAlertModel;

@protocol SBSoftwareUpdateAlertModelDelegate <NSObject>
- (void)alertModel:(SBSoftwareUpdateAlertModel *)arg1 alertFlowDidChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
@end

