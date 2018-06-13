
#import "UIView.h"

#import "SBFolderViewDelegate.h"

@class NSString, SBFolderView, SBIconViewMap;

@interface SBHomeScreenPreviewView : UIView <SBFolderViewDelegate>
{
    SBIconViewMap *_viewMap;
    SBFolderView *_folderContent;
}

+ (void)cleanupPreview;
+ (id)preview;
- (void)folderViewShouldBeginEditing:(id)arg1;
- (void)folderViewShouldClose:(id)arg1;
- (void)folderViewDidEndScrolling:(id)arg1;
- (void)folderViewWillBeginScrolling:(id)arg1;
- (void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;
- (Class)iconListViewClassForFolderView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 iconController:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

