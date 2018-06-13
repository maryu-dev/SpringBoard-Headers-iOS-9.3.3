
#import "XBApplicationController.h"

#import "FBApplicationLibraryPreInstallClient.h"

@class FBApplicationLibrary, NSString;

@interface SBSplashBoardApplicationController : XBApplicationController <FBApplicationLibraryPreInstallClient>
{
    FBApplicationLibrary *_applicationLibrary;
}

- (id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2;
- (void)applicationLibrary:(id)arg1 didDemoteApplications:(id)arg2 completion:(id)arg3;
- (void)applicationLibrary:(id)arg1 didRemoveApplications:(id)arg2 completion:(id)arg3;
- (void)applicationLibrary:(id)arg1 _willNotify_didReplaceApplications:(id)arg2 withApplications:(id)arg3 completion:(id)arg4;
- (void)applicationLibrary:(id)arg1 _willNotify_didAddApplications:(id)arg2 completion:(id)arg3;
- (void)_registerForFBApplicationLibraryEventsBecauseWeAreSpringBoard;
- (id)_allApplicationsFilteredBySystem:(_Bool)arg1 bySplashBoard:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

