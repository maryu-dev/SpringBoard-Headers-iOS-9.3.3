
#import "SBRowInfo.h"

@class NCWidgetDatum, SBWidgetViewController;

@interface SBWidgetRowInfo : SBRowInfo
{
    SBWidgetViewController *_widget;
    double _preferredViewHeight;
    _Bool _visible;
    struct {
        unsigned int isPreferredViewHeightValid:1;
    } _widgetBulletinInfoFlags;
}

- (void)populateReusableView:(id)arg1;
- (double)heightForReusableViewForNotificationCenterTableViewController:(id)arg1 layoutMode:(long long)arg2 sectionLocation:(long long)arg3;
- (id)reusableViewIdentifier;
- (Class)reusableViewClass;
@property(nonatomic) double preferredViewHeight;
- (id)displayName;
- (id)settingsIcon;
- (id)icon;
- (id)_sectionIcon;
- (id)identifier;
@property(readonly, nonatomic) NCWidgetDatum *representedWidgetDatum;

@end

