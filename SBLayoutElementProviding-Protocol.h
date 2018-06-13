
#import "SBLayoutElementDescriptor.h"

@class SBLayoutElement;

@protocol SBLayoutElementProviding <SBLayoutElementDescriptor>
- (SBLayoutElement *)layoutElementForRole:(long long)arg1;
- (SBLayoutElement *)layoutElement;
@end

