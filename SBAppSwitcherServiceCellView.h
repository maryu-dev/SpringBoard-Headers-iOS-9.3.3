
#import "UIView.h"

#import "SBMainAppSwitcherPageContentView.h"

@class NSString;

@interface SBAppSwitcherServiceCellView : UIView <SBMainAppSwitcherPageContentView>
{
    long long _orientation;
}

- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

