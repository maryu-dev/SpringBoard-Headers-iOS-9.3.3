
#import "NSObject.h"

@class FBSDisplay, FBWorkspaceEventQueue, NSHashTable;

@interface SBWorkspace : NSObject
{
    FBSDisplay *_display;
    FBWorkspaceEventQueue *_eventQueue;
    NSHashTable *_slaves;
}

+ (id)mainWorkspace;
- (id)_slaveTransactionsForTransitionRequest:(id)arg1;
- (void)removeSlave:(id)arg1;
- (void)addSlave:(id)arg1;
- (_Bool)_executeTransitionRequest:(id)arg1 options:(unsigned long long)arg2 validator:(id)arg3;
- (id)transactionForTransitionRequest:(id)arg1;
- (_Bool)executeTransitionRequest:(id)arg1 withValidator:(id)arg2;
- (_Bool)executeTransitionRequest:(id)arg1;
- (_Bool)requestTransitionWithOptions:(unsigned long long)arg1 builder:(id)arg2 validator:(id)arg3;
- (_Bool)requestTransitionWithBuilder:(id)arg1;
- (id)createRequestForApplicationActivation:(id)arg1 options:(unsigned long long)arg2;
- (id)createRequestWithOptions:(unsigned long long)arg1;
- (id)initWithDisplay:(id)arg1 eventQueue:(id)arg2;
- (id)init;

@end

