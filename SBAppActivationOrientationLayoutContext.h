
#import "NSObject.h"

#import "SBMainDisplayLayoutContext.h"

@class NSString, SBApplication;

@interface SBAppActivationOrientationLayoutContext : NSObject <SBMainDisplayLayoutContext>
{
    SBApplication *_app;
    id <SBMainDisplayLayoutContext> _layoutContext;
}

- (_Bool)includesStatusBarForLayoutRole:(long long)arg1;
- (long long)wallpaperModeForLayoutRole:(long long)arg1;
- (long long)wallpaperMode;
@property(readonly, nonatomic) long long externallyManagedSideAppWidth;
@property(readonly, nonatomic) long long externallyManagedSideAppPresentationStyle;
@property(readonly, nonatomic) long long sideAppWidth;
@property(readonly, nonatomic) long long sideAppPresentationStyle;
@property(readonly, nonatomic) long long interfaceOrientation;
- (_Bool)layoutContainsRole:(long long)arg1;
- (id)initWithApplication:(id)arg1 layoutContext:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

