
#import "UITableViewCell.h"

#import "SBModalLayoutCaching.h"

@class NSString, SBWidgetRowInfo;

@interface SBWidgetCell : UITableViewCell <SBModalLayoutCaching>
{
    long long _layoutMode;
    SBWidgetRowInfo *_representedWidgetRowInfo;
}

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

