
#import "NSObject.h"

@class SBControlCenterSectionViewController, SBControlCenterStatusUpdate;

@protocol SBControlCenterSectionViewControllerDelegate <NSObject>
- (void)sectionWantsControlCenterDismissal:(SBControlCenterSectionViewController *)arg1;
- (void)section:(SBControlCenterSectionViewController *)arg1 publishStatusUpdate:(SBControlCenterStatusUpdate *)arg2;
- (void)noteSectionEnabledStateDidChange:(SBControlCenterSectionViewController *)arg1;
@end

