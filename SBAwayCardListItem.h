
#import "SBAwayListItem.h"

@class NSString, SBSCardItem, UIImage;

@interface SBAwayCardListItem : SBAwayListItem
{
    SBSCardItem *_cardItem;
    UIImage *_cardThumbnail;
    UIImage *_iconImage;
}

@property(readonly, nonatomic) __weak NSString *body;
@property(readonly, nonatomic) __weak NSString *title;
- (_Bool)inertWhenLocked;
- (id)sortDate;

@end

