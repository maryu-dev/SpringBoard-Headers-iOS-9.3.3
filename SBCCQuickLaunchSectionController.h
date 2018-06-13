
#import "SBCCButtonSectionController.h"

@interface SBCCQuickLaunchSectionController : SBCCButtonSectionController
{
}

+ (Class)buttonControllerClass;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (struct CGSize)contentSizeForOrientation:(long long)arg1;
- (id)sectionIdentifier;
- (id)init;

@end

