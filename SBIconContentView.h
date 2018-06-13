
#import "UIView.h"

@class NSMutableArray;

@interface SBIconContentView : UIView
{
    long long _orientation;
    NSMutableArray *_folderContentViews;
    double _statusBarHeight;
}

- (void)layoutSubviews;
- (void)didAddSubview:(id)arg1;
- (struct CGRect)_frameForFolderView:(id)arg1;
- (id)_folderViews;
- (void)clearAllFolderContentViews;
- (void)popFolderContentView:(id)arg1;
- (void)pushFolderContentView:(id)arg1;
- (id)initWithOrientation:(long long)arg1 statusBarHeight:(double)arg2;

@end

