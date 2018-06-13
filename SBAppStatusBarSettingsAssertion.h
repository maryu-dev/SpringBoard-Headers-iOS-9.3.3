
#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSString, SBAppStatusBarSettings;

@interface SBAppStatusBarSettingsAssertion : NSObject <BSDescriptionProviding>
{
    SBAppStatusBarSettings *_settings;
    unsigned long long _level;
    NSString *_reason;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)modifySettingsWithBlock:(id)arg1;
- (void)dealloc;
- (id)initWithStatusBarHidden:(_Bool)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3;
- (id)initWithSettings:(id)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

