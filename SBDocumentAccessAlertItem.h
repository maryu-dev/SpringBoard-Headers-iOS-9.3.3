
#import "SBAlertItem.h"

@class NSFileCoordinator, NSTimer, NSURL;

@interface SBDocumentAccessAlertItem : SBAlertItem
{
    _Bool _downloadMessage;
    NSURL *_url;
    NSFileCoordinator *_fileCoordinator;
    NSTimer *_timer;
    id _subscriber;
}

- (void)_activateAlertItem:(id)arg1;
- (void)scheduleToShowWithTimeInterval:(double)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 fileCoordinator:(id)arg2;
- (id)init;

@end

