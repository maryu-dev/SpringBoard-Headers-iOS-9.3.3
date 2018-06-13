
#import "NSObject.h"

@class SBCCButtonModule;

@protocol SBCCButtonModuleDelegate <NSObject>
- (void)buttonModulePropertiesDidChange:(SBCCButtonModule *)arg1;
- (void)buttonModuleStateDidChange:(SBCCButtonModule *)arg1;
@end

