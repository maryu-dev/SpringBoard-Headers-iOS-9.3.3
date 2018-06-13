
#import "SBRowInfo.h"

@class NCSnippetDatum, SBItemInfoLayoutCache;

@interface SBSnippetRowInfo : SBRowInfo
{
    struct CGRect _textRect;
    SBItemInfoLayoutCache *_layoutCache;
    long long _location;
}

+ (double)topBaselineToCellTopInLayoutMode:(long long)arg1;
- (void)populateReusableView:(id)arg1;
- (double)heightForReusableViewForNotificationCenterTableViewController:(id)arg1 layoutMode:(long long)arg2 sectionLocation:(long long)arg3;
- (void)invalidateCachedLayoutData;
@property(readonly, nonatomic) double lastSnippetPadding;
- (Class)reusableViewClass;
- (id)identifier;
- (id)_representedBulletin;
@property(readonly, nonatomic) NCSnippetDatum *representedSnippetDatum;

@end

