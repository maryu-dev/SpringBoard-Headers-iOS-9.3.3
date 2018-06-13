
#import "NSObject.h"

@class SBDeckSwitcherItemContainer;

@protocol SBDeckSwitcherItemContainerDelegate <NSObject>
- (double)minimumVerticalTranslationForKillingOfContainer:(SBDeckSwitcherItemContainer *)arg1;
- (void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(SBDeckSwitcherItemContainer *)arg2;
- (struct CGRect)frameForPageViewOfContainer:(SBDeckSwitcherItemContainer *)arg1 fullyPresented:(_Bool)arg2;
- (void)selectedDisplayItemOfContainer:(SBDeckSwitcherItemContainer *)arg1;
- (_Bool)canSelectDisplayItemOfContainer:(SBDeckSwitcherItemContainer *)arg1 numberOfTaps:(long long)arg2;
- (void)killDisplayItemOfContainer:(SBDeckSwitcherItemContainer *)arg1 withVelocity:(double)arg2;
- (_Bool)shouldShowIconAndLabelOfContainer:(SBDeckSwitcherItemContainer *)arg1;
- (_Bool)isDisplayItemOfContainerRemovable:(SBDeckSwitcherItemContainer *)arg1;
@end

