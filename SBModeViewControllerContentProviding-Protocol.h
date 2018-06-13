
#import "NSObject.h"

@class SBModeViewController;

@protocol SBModeViewControllerContentProviding <NSObject>
- (_Bool)canRemoveViewOnDismissal:(SBModeViewController *)arg1;
@end

