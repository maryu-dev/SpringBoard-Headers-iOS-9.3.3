
#import "SBFolder.h"

@class SBIconListModel;

@interface SBRootFolder : SBFolder
{
    id <SBRootFolderDelegate> _delegate;
}

+ (_Bool)isRootFolderClass;
- (_Bool)isRootFolder;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)nodeIdentifier;
- (void)_setDock:(id)arg1;
@property(retain, nonatomic) SBIconListModel *dock;
@property(readonly, nonatomic) _Bool supportsDock;
- (void)placeIconsOnFirstPage:(id)arg1;
- (id)_listsForCompaction;
- (_Bool)canEditDisplayName;
- (_Bool)canRemoveIcons;

@end

