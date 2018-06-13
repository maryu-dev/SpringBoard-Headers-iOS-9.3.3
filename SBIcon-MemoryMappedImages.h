
#import "SBIcon.h"

@interface SBIcon (MemoryMappedImages)
+ (id)memoryMappedIconImageOfSize:(struct CGSize)arg1 scale:(double)arg2 withDrawing:(id)arg3;
+ (id)memoryMappedIconImageForIconImage:(id)arg1;
+ (id)_iconImageOfSize:(struct CGSize)arg1 scale:(double)arg2 failGracefully:(_Bool)arg3 drawing:(id)arg4;
+ (id)_iconImagesMemoryPool;
@end

