
#import "UIViewController.h"

#import "SBControlCenterObserver.h"

@class NSString;

@interface SBControlCenterSectionViewController : UIViewController <SBControlCenterObserver>
{
    id <SBControlCenterSectionViewControllerDelegate> _delegate;
}

+ (Class)viewClass;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)noteSettingsDidUpdate:(id)arg1;
- (struct CGSize)contentSizeForOrientation:(long long)arg1;
- (_Bool)enabledForOrientation:(long long)arg1;
- (id)view;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier;
- (void)loadView;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

