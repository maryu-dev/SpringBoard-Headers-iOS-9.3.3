
#import "UIView.h"

#import "SBUIControlCenterControl.h"

@class NSString;

@interface SBControlCenterKnockoutView : UIView <SBUIControlCenterControl>
{
}

- (void)controlConfigurationDidChangeForState:(long long)arg1;
- (void)controlAppearanceDidChangeForState:(long long)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

