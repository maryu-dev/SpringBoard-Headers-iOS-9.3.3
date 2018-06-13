
#import "SBSceneLayoutViewController.h"

@interface SBStarkSceneLayoutViewController : SBSceneLayoutViewController
{
    id <SBStarkSessionConfiguring> _configuration;
}

+ (Class)_layoutStateClass;
- (struct CGRect)_referenceFrameForApplicationIdentifier:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceFrameForIdentifier:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceBoundsForIdentifier:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceBoundsForEntity:(id)arg1 inLayoutState:(id)arg2;
- (void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3;
- (id)initWithDisplay:(id)arg1 configuration:(id)arg2;

@end

