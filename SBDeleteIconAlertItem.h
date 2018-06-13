
#import "SBAlertItem.h"

#import "UIAlertViewDelegate.h"

@class NSObject<OS_dispatch_semaphore>, NSString, SBIcon;

@interface SBDeleteIconAlertItem : SBAlertItem <UIAlertViewDelegate>
{
    SBIcon *_icon;
    _Bool _checkedDocumentsInCloudState;
    _Bool _appHasDocumentsInCloud;
    _Bool _appHasDocumentsWithPendingUpdates;
    _Bool _askedUserAboutDocumentsInCloud;
    _Bool _askedUserAboutDocumentsWithPendingUpdates;
    _Bool _checkedForRelatedData;
    _Bool _finishedCheckingForRelatedData;
    _Bool _appHasHealthKitData;
    _Bool _appHasGameKitData;
    NSObject<OS_dispatch_semaphore> *_healthKitResponseSem;
    _Bool _onlyShowingCancelButton;
}

- (_Bool)_hasRelatedData;
- (void)_waitForRelatedDataResponsesIfNeeded;
- (void)_startCheckingForRelatedExternalDataIfNeeded;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)_checkDocumentsInCloudStateIfNeeded;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)icon;
- (void)dealloc;
- (id)initWithIcon:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

