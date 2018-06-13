
#import "NSObject.h"

#import "BBRemoteDataProvider.h"

@class BBBulletinRequest, BBDataProviderProxy, NSDate, NSMutableDictionary, NSString, NSTimer, UILocalNotification;

@interface SBClockDataProvider : NSObject <BBRemoteDataProvider>
{
    NSTimer *_alarmUpdateTimer;
    BBDataProviderProxy *_dataProviderProxy;
    NSMutableDictionary *_localNotificationsByPublisherBulletinID;
    UILocalNotification *_nextAlarmForToday;
    BBBulletinRequest *_nextTodayAlarmBulletin;
    UILocalNotification *_firstAlarmForTomorrow;
    NSDate *_nextTomorrowFireDate;
    BBBulletinRequest *_nextTomorrowAlarmBulletin;
}

+ (id)sharedInstance;
- (void)_handleBulletinSnoozeDismissResponse:(id)arg1;
- (void)_removeBulletinWithPublisherBulletinID:(id)arg1;
- (void)_handleBulletinAlarmSnoozeResponse:(id)arg1;
- (void)_handleBulletinAlarmDismissResponse:(id)arg1;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)_actionWithIdentifier:(id)arg1 title:(id)arg2;
- (id)_supplementaryActionsFromAlarmNotification:(id)arg1;
- (id)_snoozeActionFromAlarmNotification:(id)arg1;
- (id)_dismissActionFromSnoozeNotification:(id)arg1;
- (id)_dismissActionFromAlarmNotification:(id)arg1;
- (id)_alternateActionFromAlarmNotification:(id)arg1;
- (id)_songSoundFromSoundName:(id)arg1 vibrationPattern:(id)arg2;
- (id)_defaultSound;
- (id)_ringtoneSoundFromSoundName:(id)arg1 vibrationPattern:(id)arg2;
- (id)_soundFromNotification:(id)arg1;
- (id)_defaultVibrationPattern;
- (id)_vibrationPatternForVibrationName:(id)arg1;
- (id)_recordIDFromNotification:(id)arg1;
- (id)_titleFromNotification:(id)arg1;
- (id)_timerIDFromNotification:(id)arg1;
- (_Bool)_isTimerNotification:(id)arg1;
- (id)_alarmIDFromNotification:(id)arg1;
- (_Bool)_isAlarmNotification:(id)arg1;
- (id)_bulletinForNotification:(id)arg1;
- (void)_interruptAudioAndLockDeviceForLocalNotification:(id)arg1;
- (void)_publishBulletinForLocalNotification:(id)arg1;
- (void)_handleLocalNotificationDidFire:(id)arg1;
- (id)sortDescriptors;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3;
- (long long)_sectionSubtypeFromNotification:(id)arg1;
- (id)sectionParameters;
- (void)_migrateSectionInfo;
- (id)defaultSectionInfo;
- (id)sectionIdentifier;
- (id)_launchActionForClockAppSection:(int)arg1;
- (id)_alarmMessageForNotification:(id)arg1 withSingleAlarmFormat:(_Bool)arg2;
- (void)_publishAlarmsWithScheduledNotifications:(id)arg1;
- (void)_calculateNextTomorrowAlarmAndBulletinWithScheduledNotifications:(id)arg1;
- (void)_calculateNextTodayAlarmAndBulletinWithScheduledNotifications:(id)arg1;
- (id)_nextAlarmForFeed:(unsigned long long)arg1 withNotifications:(id)arg2;
- (void)_handleClockNotificationUpdate:(id)arg1;
- (void)dealloc;
- (void)dataProviderDidLoad;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

