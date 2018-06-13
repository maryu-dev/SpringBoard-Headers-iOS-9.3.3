
#import "SBWidgetViewController.h"

#import "_SBUIWidgetHost.h"

@class NSString, _SBUIWidgetViewController;

@interface _SBWidgetViewControllerInProcess : SBWidgetViewController <_SBUIWidgetHost>
{
    _SBUIWidgetViewController *_widgetViewController;
}

- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
- (void)invalidatePreferredViewSize;
- (void)requestLaunchOfURL:(id)arg1;
- (void)viewDidLoad;
- (void)updateContentWidth:(double)arg1;
- (void)requestPreferredViewHeightWithHandler:(id)arg1;
- (id)initWithWidgetIdentifier:(id)arg1 bundlePath:(id)arg2;
- (id)_newWidgetViewControllerWithIdentifier:(id)arg1 bundlePath:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

