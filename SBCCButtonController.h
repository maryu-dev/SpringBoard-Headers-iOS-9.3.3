
#import "UIViewController.h"

#import "SBCCButtonModuleDelegate.h"
#import "SBUIControlCenterButtonDelegate.h"

@class NSString, SBCCButtonModule, UIAlertController;

@interface SBCCButtonController : UIViewController <SBCCButtonModuleDelegate, SBUIControlCenterButtonDelegate>
{
    UIAlertController *_alertController;
    id <SBCCButtonControllerDelegate> _delegate;
    SBCCButtonModule *_module;
}

- (void)buttonModulePropertiesDidChange:(id)arg1;
- (void)buttonModuleStateDidChange:(id)arg1;
- (void)_buttonTapped;
- (void)buttonTapped:(id)arg1;
- (_Bool)presentConfirmationAlert;
- (id)glyphImageForState:(int)arg1;
- (void)_updateButtonProperties;
- (void)_updateButtonState;
- (void)controlCenterDidDismiss;
- (void)viewDidLoad;
- (id)view;
- (void)dealloc;
- (id)initWithModule:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

