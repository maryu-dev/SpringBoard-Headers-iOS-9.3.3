
#import "NSObject.h"

@class SBFolderIcon, SBIconGridImage;

@interface _SBFolderPageElement : NSObject
{
    SBIconGridImage *_gridImage;
    unsigned long long _visibleRow;
    unsigned long long _pageIndex;
    SBFolderIcon *_folderIcon;
}

- (unsigned long long)firstVisibleRowForGap;
- (unsigned long long)firstVisibleMiniIconIndex;

@end

