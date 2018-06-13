
#import "SBFolderController.h"

@interface SBStarkFolderController : SBFolderController
{
    unsigned long long _interactionAffordances;
    _Bool _supportsKnobEvents;
    _Bool _supportsTouchEvents;
}

- (void)setInnerFolderController:(id)arg1;
@property(nonatomic) unsigned long long interactionAffordances;
- (id)_iconPageIndicatorImageSetCache;
- (Class)_contentViewClass;

@end

