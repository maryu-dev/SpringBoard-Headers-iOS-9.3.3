
#import "NSObject.h"

@class NSMutableDictionary, UIWindow;

@interface SBSheetController : NSObject
{
    NSMutableDictionary *_appToSheetMap;
    UIWindow *_presentationWindow;
}

+ (id)sharedInstance;
- (_Bool)sheetWantsProgress;
- (id)applicationForTopSheet;
- (void)dismissSheetsForApplication:(id)arg1;
- (void)dismissAllSheets;
- (_Bool)isShowingSheetsForApplication:(id)arg1;
- (_Bool)isShowingSheets;
- (void)sendStatusBarOrientationWillChangeToSheets:(long long)arg1 duration:(float)arg2;
- (void)dismissRemoteViewIdentifier:(id)arg1 forApplication:(id)arg2 animated:(_Bool)arg3;
- (_Bool)presentRemoteViewIdentifier:(id)arg1 asSheetForApplication:(id)arg2 requireTopApplication:(_Bool)arg3 animated:(_Bool)arg4;
- (void)dismissSheetView:(id)arg1 animated:(_Bool)arg2;
- (void)_tearDownSheet:(id)arg1;
- (void)presentSheetView:(id)arg1 animated:(_Bool)arg2;
- (id)init;

@end

