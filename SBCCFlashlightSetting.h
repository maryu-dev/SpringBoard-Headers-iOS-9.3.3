
#import "SBCCSettingModule.h"

@class AVFlashlight, NSObject<OS_dispatch_queue>;

@interface SBCCFlashlightSetting : SBCCSettingModule
{
    AVFlashlight *_flashlight;
    NSObject<OS_dispatch_queue> *_flashlightQueue;
    _Bool _stayWarm;
    _Bool _flashlightOn;
}

+ (_Bool)isSupported:(int)arg1;
+ (id)displayName;
+ (id)identifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_featureLockStateDidChangeNotification:(id)arg1;
- (void)_deviceBlockStateDidChangeNotification:(id)arg1;
- (id)glyphImageForState:(int)arg1 section:(int)arg2;
- (id)_imageNameForState:(int)arg1 section:(int)arg2;
- (id)_shortcutImageNameForState:(int)arg1;
- (id)_settingImageNameForState:(int)arg1;
- (void)_updateFlashlightPowerState;
- (void)_updateState;
- (_Bool)_enableTorch:(_Bool)arg1;
- (_Bool)_toggleState;
- (void)cooldown;
- (void)warmup;
- (void)deactivate;
- (void)_tearDown;
- (void)activate;
- (id)unavailableText;
- (id)statusUpdate;
- (id)aggdKey;
- (id)displayName;
- (void)dealloc;

@end

