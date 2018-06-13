
#import "SBControlCenterSectionViewController.h"

#import "MPUSystemMediaControlsDelegate.h"

@class MPUSystemMediaControlsViewController, NSString;

@interface SBCCMediaControlsSectionController : SBControlCenterSectionViewController <MPUSystemMediaControlsDelegate>
{
    MPUSystemMediaControlsViewController *_systemMediaViewController;
}

- (void)systemMediaControlsViewController:(id)arg1 didReceiveTapOnControlType:(long long)arg2;
- (void)viewDidLoad;
- (struct CGSize)contentSizeForOrientation:(long long)arg1;
- (id)sectionIdentifier;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

