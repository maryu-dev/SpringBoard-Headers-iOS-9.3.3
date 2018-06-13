
#import "SBStarkBannerSource.h"

#import "BBObserverDelegate.h"
#import "SBVolumePressBandit.h"

@class BBObserver, NSString;

@interface SBStarkBulletinBannerSource : SBStarkBannerSource <BBObserverDelegate, SBVolumePressBandit>
{
    BBObserver *_bbObserver;
    _Bool _quietModeEnabled;
}

- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)_reloadVolumePressBanditPreference;
- (void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned long long)arg2;
- (void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)_showTestBanner:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void *)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

