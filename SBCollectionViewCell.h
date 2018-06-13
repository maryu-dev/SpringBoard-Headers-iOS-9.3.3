
#import "UICollectionViewCell.h"

@interface SBCollectionViewCell : UICollectionViewCell
{
    _Bool _performSetHighlighted;
    _Bool _protectDelayedUnhighlights;
    id <SBCollectionViewCellDelegate> _delegate;
}

- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 afterDelay:(double)arg2;
- (void)_performSetHighlighted;
- (void)_didSetHighlighted:(_Bool)arg1;

@end

