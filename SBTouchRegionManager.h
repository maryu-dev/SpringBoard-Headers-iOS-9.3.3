
#import "NSObject.h"

#import "FBSDisplayLayoutObserver.h"

@class FBSDisplayLayoutMonitor, NSObject<OS_dispatch_queue>, NSString, SBBackBoardServicesInterface;

@interface SBTouchRegionManager : NSObject <FBSDisplayLayoutObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    SBBackBoardServicesInterface *_queue_bksInterface;
    FBSDisplayLayoutMonitor *_queue_displayLayoutMonitor;
    struct NSMutableSet *_queue_hitTestRegions;
}

+ (id)sharedInstance;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)_queue_handleHitTestRegionUpdate:(struct NSMutableSet *)arg1 forDisplay:(id)arg2;
- (void)_queue_handleDisplayLayoutUpdateWithSceneRects:(struct NSMutableSet *)arg1 forDisplay:(id)arg2;
- (struct NSMutableSet *)_calculateHitTestRegionsFromSceneRects:(struct NSMutableSet *)arg1;
- (struct NSMutableSet *)_calculateTouchRegionsFromSceneRects:(struct NSMutableSet *)arg1;
- (id)displayLayoutMonitor;
- (void)setDisplayLayoutMonitor:(id)arg1;
- (double)touchRegionBuffer;
- (void)dealloc;
- (id)_initWithBKSInterface:(id)arg1;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

