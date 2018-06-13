
#import "SBSwitcherWallpaperPageContentView.h"

#import "SBAppViewHostRequester.h"

@class NSString, SBAppView, SBBestAppSuggestion, SBOrientationTransformWrapperView;

@interface SBSwitcherAppSuggestionSlideUpView : SBSwitcherWallpaperPageContentView <SBAppViewHostRequester>
{
    SBBestAppSuggestion *_bestAppSuggestion;
    SBAppView *_appView;
    SBOrientationTransformWrapperView *_appViewLayoutWrapper;
    long long _resultingOrientation;
}

- (void)_configureContentView;
- (long long)appViewRequesterPriority:(id)arg1;
- (id)appViewRequesterIdentifier:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)layoutSubviews;
- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1 appSuggestion:(id)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

