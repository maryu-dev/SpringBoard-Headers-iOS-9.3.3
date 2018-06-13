
#import "SBIconContentView.h"

@class SBStarkIconLayoutOverrideStrategy;

@interface SBStarkIconContentView : SBIconContentView
{
    SBStarkIconLayoutOverrideStrategy *_iconLayoutOverrideStrategy;
}

- (struct CGRect)_frameForFolderView:(id)arg1;

@end

