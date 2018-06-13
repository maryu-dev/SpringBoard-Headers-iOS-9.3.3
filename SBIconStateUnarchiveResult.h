
#import "NSObject.h"

#import "SBIconStateUnarchiveContext.h"

@class NSMutableArray, NSMutableSet, NSString, SBIconModel;

@interface SBIconStateUnarchiveResult : NSObject <SBIconStateUnarchiveContext>
{
    SBIconModel *_iconSource;
    id <SBIconIndexNode> _node;
    NSMutableArray *_folderStack;
    long long _parseDepth;
    NSMutableSet *_nodeIdentifiersUnarchived;
    _Bool _corrupted;
    _Bool _dirty;
}

- (void)_setNode:(id)arg1;
- (void)_noteNodeIdentifierWasUnarchived:(id)arg1;
- (_Bool)_isNodeIdentifierAlreadyUnarchived:(id)arg1;
- (void)_noteSignificantDeviation;
- (void)_noteRepresentationIsCorrupted;
- (long long)_currentParseDepth;
- (void)_noteExitedNode;
- (void)_noteEnteredNode;
- (id)_popFolder;
- (id)_currentFolder;
- (void)_pushFolder:(id)arg1;
@property(readonly, nonatomic, getter=isDirty) _Bool dirty;
@property(readonly, nonatomic, getter=isValid) _Bool valid;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

