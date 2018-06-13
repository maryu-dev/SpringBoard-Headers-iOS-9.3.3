
#import "SBLeafIcon.h"

@class NSURL, SBBookmark, UIWebClip;

@interface SBBookmarkIcon : SBLeafIcon
{
    SBBookmark *_bookmark;
}

- (_Bool)isBookmarkIcon;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)matchedWebApplication;
@property(readonly, nonatomic) NSURL *launchURL;
@property(readonly, nonatomic) UIWebClip *webClip;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBookmark:(id)arg1;

@end

