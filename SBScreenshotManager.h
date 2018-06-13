
#import "NSObject.h"

@class SBSceneManagerCoordinator, _SBScreenshotPersistenceCoordinator;

@interface SBScreenshotManager : NSObject
{
    SBSceneManagerCoordinator *_sceneManagerCoordinator;
    _SBScreenshotPersistenceCoordinator *_persistenceCoordinator;
    id <SBScreenshotManagerDataSource> _dataSource;
}

- (id)_providerForScreen:(id)arg1;
- (id)_fetchEligibleScreenshotProvidersForSnapshotting;
- (void)saveScreenshotsWithCompletion:(id)arg1;
- (void)saveScreenshots;
- (id)_initWithDataSource:(id)arg1 persistenceCoordinator:(id)arg2 sceneManagerCoordinator:(id)arg3;
- (id)initWithDataSource:(id)arg1;

@end

