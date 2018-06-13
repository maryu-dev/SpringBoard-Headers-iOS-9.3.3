
#import "NSObject.h"

@interface SBSoundPreferences : NSObject
{
}

+ (_Bool)shouldVibrateForCurrentRingerStateWithAudioCategory:(id)arg1;
+ (_Bool)shouldVibrateForCurrentRingerState;
+ (_Bool)vibrateWhenSilent;
+ (_Bool)vibrateWhenRinging;
+ (id)vibratePattern;
+ (_Bool)playLockSound;
+ (id)ringtonePath;
+ (id)ringtoneIdentifier;
+ (id)calendarAlarmPath;
+ (id)_soundDefaults;

@end

