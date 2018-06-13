
#import "SBIconObserver.h"

@class SBFolderIcon, SBIcon, SBIconGridImage;

@protocol SBFolderIconObserver <SBIconObserver>
- (void)folderIcon:(SBFolderIcon *)arg1 didUpdateGridImage:(SBIconGridImage *)arg2 forListIndex:(unsigned long long)arg3 forContainedIconImageUpdate:(SBIcon *)arg4;
@end

