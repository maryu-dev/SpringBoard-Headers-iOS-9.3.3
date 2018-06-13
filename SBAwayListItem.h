
#import "NSObject.h"

#import "NSCopying.h"
#import "SBAwayListCellButtonHandler.h"
#import "SBUIQuietModePlayability.h"

@class NSDate, NSString, SBLockScreenActionContext;

@interface SBAwayListItem : NSObject <SBAwayListCellButtonHandler, SBUIQuietModePlayability, NSCopying>
{
    NSDate *_timestamp;
    _Bool _isNewItem;
    SBLockScreenActionContext *_lockScreenActionContext;
    NSString *_buttonLabel;
}

- (_Bool)overridesPocketMode;
- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (_Bool)inertWhenLocked;
- (void)prepareWithCompletion:(id)arg1;
- (_Bool)canBeRemovedByUnlock;
- (_Bool)canBeRemovedByNotificationCenterPresentation;
@property(readonly, nonatomic) _Bool shouldPlayLightsAndSirens;
- (_Bool)wantsHighlightOnInsert;
- (void)buttonPressed;
- (id)copyWithZone:(struct _NSZone *)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

