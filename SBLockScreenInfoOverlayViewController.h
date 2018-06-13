
#import "SBLockOverlayViewController.h"

#import "SBLockOverlayViewDelegate.h"

@class NSString, SBLockScreenInfoOverlayView;

@interface SBLockScreenInfoOverlayViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate>
{
    SBLockScreenInfoOverlayView *_overlayView;
    NSString *_title;
}

- (void)handleTapGestureFromView:(id)arg1;
- (void)loadView;
- (id)initWithTitle:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

