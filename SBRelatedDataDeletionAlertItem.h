
#import "SBAlertItem.h"

#import "UIAlertViewDelegate.h"

@class NSMutableIndexSet, NSString, SBApplicationIcon;

@interface SBRelatedDataDeletionAlertItem : SBAlertItem <UIAlertViewDelegate>
{
    SBApplicationIcon *_icon;
    NSMutableIndexSet *_relatedDataStores;
    NSMutableIndexSet *_dataStoresToPurge;
    long long _deleteButtonIndex;
}

- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)_hasUnconsideredDataStores;
- (unsigned long long)_currentDataStoreCandidate;
- (void)setHasGameKitData:(_Bool)arg1;
- (void)setHasHealthKitData:(_Bool)arg1;
- (id)initWithIcon:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

