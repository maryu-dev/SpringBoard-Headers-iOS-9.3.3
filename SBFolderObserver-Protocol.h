
#import "NSObject.h"

@class NSArray, NSIndexSet, SBFolder, SBIconListModel;

@protocol SBFolderObserver <NSObject>
- (void)folder:(SBFolder *)arg1 didRemoveLists:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)folder:(SBFolder *)arg1 didAddList:(SBIconListModel *)arg2;
@end

