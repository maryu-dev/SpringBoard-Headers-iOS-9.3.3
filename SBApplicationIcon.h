
#import "SBLeafIcon.h"

@class SBApplication, UIImage;

@interface SBApplicationIcon : SBLeafIcon
{
    UIImage *_cachedSquareHomeScreenContentsImage;
    SBApplication *_application;
    id _uninstallStringsLocalizationBlock;
}

- (id)application;
- (_Bool)isApplicationIcon;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertBodyForAppWithDocumentUpdatesPending;
- (id)uninstallAlertBodyForAppWithDocumentsInCloud;
- (id)uninstallAlertBodyNotAllowed;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitleNotAllowed;
- (id)uninstallAlertTitle;
- (id)_localizedUninstallStringForKey:(id)arg1;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (void)setBadge:(id)arg1;
- (id)automationID;
- (id)tags;
- (id)getUnmaskedIconImage:(int)arg1;
- (id)__loadUnmaskedIconImageForFormat:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (void)asynchronouslyRequestIconImageForFormat:(int)arg1 completionHandler:(id)arg2;
- (id)_blockForGeneratingIconImageInBackgroundWithFormat:(int)arg1 complete:(id)arg2;
- (id)__loadIconImageForDataSource:(id)arg1 format:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplication:(id)arg1;

@end

