
#import "SBControlCenterSectionViewController.h"

#import "SBCCButtonControllerDelegate.h"
#import "_UISettingsKeyPathObserver.h"

@class NSMutableArray, NSMutableDictionary, NSString, SBControlCenterButtonSectionSettings;

@interface SBCCButtonSectionController : SBControlCenterSectionViewController <SBCCButtonControllerDelegate, _UISettingsKeyPathObserver>
{
    NSMutableArray *_modules;
    NSMutableDictionary *_modulesByID;
    NSMutableDictionary *_moduleControllersByID;
    SBControlCenterButtonSectionSettings *_settings;
}

+ (Class)buttonControllerClass;
+ (Class)viewClass;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)_updateSettings;
- (void)buttonController:(id)arg1 publishStatusUpdate:(id)arg2;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (id)_sortKeyForModule:(id)arg1;
- (id)_controllerForModule:(id)arg1;
- (id)_allButtonControllers;
- (void)_deactivateModule:(id)arg1;
- (void)_activateModule:(id)arg1;
- (void)_addButtonModule:(id)arg1;
- (id)_allButtonModules;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)view;
- (id)sectionIdentifier;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

