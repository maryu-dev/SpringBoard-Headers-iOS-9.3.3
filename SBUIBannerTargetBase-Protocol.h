
#import "NSObject.h"

@class SBUIBannerContext;

@protocol SBUIBannerTargetBase <NSObject>
@property(readonly, nonatomic) long long bannerTargetIdiom;
@property(readonly, nonatomic) void *bannerTargetIdentifier;
- (void)removeCachedBannerForContext:(SBUIBannerContext *)arg1;
- (void)cacheBannerForContext:(SBUIBannerContext *)arg1 withCompletion:(void (^)(void))arg2;
- (void)dismissCurrentBannerContextForSource:(id <SBUIBannerSource>)arg1;
- (SBUIBannerContext *)currentBannerContextForSource:(id <SBUIBannerSource>)arg1;
- (void)signalSource:(id <SBUIBannerSource>)arg1;
- (_Bool)isShowingModalBanner;
- (void)modallyPresentBannerWithContext:(SBUIBannerContext *)arg1;
- (void)unregisterSource:(id <SBUIBannerSource>)arg1;
- (void)registerSource:(id <SBUIBannerSource>)arg1;
@end

