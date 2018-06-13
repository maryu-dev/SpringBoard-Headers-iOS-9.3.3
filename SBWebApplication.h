
#import "SBApplication.h"

@class NSURL, SBBookmarkIcon;

@interface SBWebApplication : SBApplication
{
    SBBookmarkIcon *_bookmarkIcon;
    NSURL *_launchURL;
}

+ (id)_webClipIdentifierFromWebAppIdentifier:(id)arg1;
+ (id)_webAppIdentifierFromWebClipIdentifier:(id)arg1;
+ (id)_dataContainerURL;
+ (id)_snapshotDirectory;
+ (id)_snapshotManifest;
+ (id)_primaryWebAppInfo;
- (id)_customStartupImageForLaunchingOrientation:(long long)arg1;
- (void)refreshLaunchImagesInSnapshotManifestIfNeededWithInfoDictionary:(id)arg1;
- (id)_snapshotManifest;
- (id)sceneIdentifierForDisplay:(id)arg1;
- (_Bool)isWebApplication;
- (id)iconIdentifier;
- (id)sandboxPath;
- (Class)iconClass;
- (id)displayName;
@property(retain, nonatomic) SBBookmarkIcon *bookmarkIcon;

@end

