
#import "UIImage.h"

#import "SBCountedMapValue.h"

@class NSString;

@interface SBIconAccessoryImage : UIImage <SBCountedMapValue>
{
    NSString *_countedMapKey;
}

- (id)initWithImage:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

