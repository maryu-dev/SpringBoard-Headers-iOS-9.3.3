
#import "SBScreenEdgePanGestureRecognizer.h"

#import "_UISettingsKeyObserver.h"

@class NSString;

@interface SBSwitcherForcePressSystemGestureRecognizer : SBScreenEdgePanGestureRecognizer <_UISettingsKeyObserver>
{
}

- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

