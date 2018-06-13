
#import "SBApplication.h"

@interface SBApplication (DefaultImage_ManifestIngestion)
+ (void)_reingestLaunchImagesForAllApps;
+ (void)_markAllManifestsForReingestion;
- (id)_sanitizedImageNameFromName:(id)arg1 withExtension:(id)arg2 actualExtension:(out id *)arg3;
- (id)_preferredImagePathByScaleInBundle:(id)arg1 resourceName:(id)arg2 ofType:(id)arg3 scale:(double)arg4 outScale:(double *)arg5;
- (id)_preferredImagePathInBundle:(id)arg1 baseResourceName:(id)arg2 ofType:(id)arg3 forMainScene:(_Bool)arg4 size:(struct CGSize)arg5 scale:(double)arg6 outScale:(double *)arg7;
- (_Bool)_allowIngestionOfLandscapeImagesOfSize:(struct CGSize)arg1;
- (id)_validInfoPlistOrientationKeys;
- (void)_ingestInfoPlistImagesInManifest:(id)arg1;
- (void)_ingestDefaultPNGsInManifest:(id)arg1 withLaunchImageBaseName:(id)arg2;
- (void)_ingestDefaultPNGsInManifest:(id)arg1;
- (void)_purgeLaunchImagesInManifest;
- (void)reingestLaunchImagesInSnapshotManifest;
- (void)purgeLaunchImagesInSnapshotManifest;
- (void)resetLaunchImageIngestionStatus;
- (void)refreshLaunchImagesInSnapshotManifestIfNeeded;
@end

