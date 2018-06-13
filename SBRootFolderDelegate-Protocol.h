
#import "NSObject.h"

@class SBIcon, SBRootFolder;

@protocol SBRootFolderDelegate <NSObject>
- (_Bool)rootFolder:(SBRootFolder *)arg1 shouldAllowBadgingForIcon:(SBIcon *)arg2;
@end

