
#import "UIView.h"

#import "SBReusableView.h"

@class NSString;

@interface SBIconLabelAccessoryView : UIView <SBReusableView>
{
}

- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLabelAccessoryType:(long long)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

