
#import "NSObject.h"

#import "SBTestRecipe.h"

@class FBApplicationUpdateScenesTransaction, NSString;

@interface SBMedusaAppsTestRecipe : NSObject <SBTestRecipe>
{
    _Bool _activated;
    NSString *_leftTestBundleID;
    NSString *_rightTestBundleID;
    NSString *_centerTestBundleID;
    FBApplicationUpdateScenesTransaction *_currentTransaction;
}

+ (id)title;
- (void)_sendToBackground:(id)arg1;
- (void)_bringToForeground:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)_updateAppsToBringUpFromPreferences;
- (void)_toggle;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

