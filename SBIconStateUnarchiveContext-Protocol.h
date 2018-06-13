
#import "NSObject.h"

@class SBFolder, SBIconModel;

@protocol SBIconStateUnarchiveContext <NSObject>
- (void)_noteNodeIdentifierWasUnarchived:(id)arg1;
- (_Bool)_isNodeIdentifierAlreadyUnarchived:(id)arg1;
- (void)_noteSignificantDeviation;
- (void)_noteRepresentationIsCorrupted;
- (long long)_currentParseDepth;
- (void)_noteExitedNode;
- (void)_noteEnteredNode;
- (SBFolder *)_popFolder;
- (SBFolder *)_currentFolder;
- (void)_pushFolder:(SBFolder *)arg1;
- (SBIconModel *)_iconSource;
@end

