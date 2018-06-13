
#import "UIView.h"

@class SBApplication, SBProxyRemoteView;

@interface SBSheetView : UIView
{
    SBProxyRemoteView *_remoteProxyView;
    SBApplication *_app;
    _Bool _wasPresentedAnimated;
}

- (void)noteSheetDidEnd;
- (_Bool)wasPresentedAnimated;
- (id)application;
- (id)remoteViewIdentifier;
- (id)initWithRemoteViewIdentifier:(id)arg1 application:(id)arg2 wasPresentedAnimated:(_Bool)arg3;

@end

