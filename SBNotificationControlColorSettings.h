
#import "NSObject.h"

@class SBControlColorSettings;

@interface SBNotificationControlColorSettings : NSObject
{
    SBControlColorSettings *_vibrantSettings;
    SBControlColorSettings *_overlaySettings;
}

+ (id)settingsWithGraphicsQuality:(long long)arg1;
+ (id)actionButtonSettingsWithGraphicsQuality:(long long)arg1;
+ (id)editButtonSettingsWithGraphicsQuality:(long long)arg1;
- (id)initWithVibrantSettings:(id)arg1 overlaySettings:(id)arg2;

@end

