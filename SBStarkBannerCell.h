
#import "SBCollectionViewCell.h"

#import "SBUIBannerView.h"

@class NSString, SBBannerContextView;

@interface SBStarkBannerCell : SBCollectionViewCell <SBUIBannerView>
{
    SBBannerContextView *_contextView;
    id <SBStarkSessionConfiguring> _starkSessionConfiguration;
}

- (_Bool)shouldBorrowScreen;
- (id)bannerContext;
- (_Bool)_disableRasterizeInAnimations;
- (void)prepareForReuse;
- (void)noteDidDismiss;
- (void)noteWillDismissWithReason:(int)arg1;
- (void)noteDidAppear;
- (void)noteWillAppear;
- (void)setBannerContext:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

