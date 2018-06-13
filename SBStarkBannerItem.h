
#import "SBUIBannerItem.h"

@class NSArray, NSDate, NSHashTable, NSMutableSet, NSString, UIImage;

@interface SBStarkBannerItem : SBUIBannerItem
{
    id <SBStarkSessionConfiguring> _configuration;
    NSHashTable *_observers;
    NSMutableSet *_displayReasons;
}

- (void)_callOrFaceTimeStateChanged;
- (_Bool)_inCallOrFaceTime;
- (_Bool)isStarkBannerItem;
- (_Bool)matchesContext:(id)arg1;
- (void)reloadDisplayProperties;
@property(readonly, copy, nonatomic) NSArray *subActionLabels;
- (_Bool)shouldShowModalSubActions;
- (id)ignoreAction;
@property(readonly, nonatomic) long long effectiveDefaultActionType;
@property(readonly, nonatomic) long long defaultActionType;
@property(readonly, nonatomic) NSDate *sourceDate;
@property(readonly, nonatomic) UIImage *categoryImage;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, copy, nonatomic) NSString *subTitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

