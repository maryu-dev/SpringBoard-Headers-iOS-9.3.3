
#import "UIViewController.h"

#import "_SBUIWidgetHost.h"

@class NSString, _SBUIWidgetViewController;

@interface SBAttributionWrapperViewController : UIViewController <_SBUIWidgetHost>
{
    _SBUIWidgetViewController *_attributionViewController;
    id <SBWidgetViewControllerDelegate> _widgetDelegate;
}

+ (id)_newAttributionViewController;
+ (id)_loadAttributionAppBundle;
- (void)invalidatePreferredViewSize;
- (void)requestLaunchOfURL:(id)arg1;
- (void)requestPresentationOfViewController:(id)arg1 presentationStyle:(long long)arg2 context:(id)arg3 completion:(id)arg4;
- (void)setVisibleWidgetsIDs:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

