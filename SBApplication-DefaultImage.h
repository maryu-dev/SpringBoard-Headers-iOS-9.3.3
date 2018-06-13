
#import "SBApplication.h"

@interface SBApplication (DefaultImage)
- (_Bool)_shouldUseSnapshotForAppLaunchIfPossible;
- (id)cachedImageForSnapshot:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)imageForSnapshot:(id)arg1 interfaceOrientation:(long long)arg2;
- (id)snapshotsWithImageName:(id)arg1 sceneID:(id)arg2 launchingSize:(struct CGSize)arg3 launchingScale:(double)arg4 contentTypeMask:(unsigned long long)arg5 statusBarStateMask:(unsigned long long)arg6 launchingOrientation:(long long)arg7;
- (id)bestSnapshotWithImageName:(id)arg1 sceneID:(id)arg2 variantID:(id)arg3 scale:(double)arg4 size:(struct CGSize)arg5 contentTypeMask:(unsigned long long)arg6 statusBarStateMask:(unsigned long long)arg7 launchingOrientation:(long long)arg8;
- (id)defaultSnapshotWithImageName:(id)arg1 sceneID:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4 interfaceOrientation:(long long)arg5;
@end

