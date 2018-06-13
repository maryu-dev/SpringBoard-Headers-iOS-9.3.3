
#import "SBLeafIcon.h"

@class SBApplicationPlaceholder;

@interface SBDownloadingIcon : SBLeafIcon
{
    _Bool _wasUninstalledByUser;
    SBApplicationPlaceholder *_appPlaceholder;
}

+ (id)leafIdentifierForApplicationPlaceholderBundleID:(id)arg1;
- (id)appPlaceholder;
- (_Bool)isDownloadingIcon;
- (void)cancelDownload;
- (id)uninstallAlertBody;
- (void)setUninstalledByUser:(_Bool)arg1;
- (_Bool)uninstalledByUser;
- (void)setApplicationPlaceholder:(id)arg1;
- (void)reloadForStatusChange;
- (void)completeUninstall;
- (id)realDisplayName;
- (id)homescreenIconImage;
- (id)_darkenedIconImageForImage:(id)arg1;
- (id)gridCellImage;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplicationPlaceholder:(id)arg1;

@end

