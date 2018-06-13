
#import "NSString.h"

@interface NSString (SBAdditions)
- (_Bool)sb_containsEmoji;
- (_Bool)sb_isEntirelyHebrewCharacters;
- (_Bool)sb_isEntirelyArabicCharacters;
- (_Bool)sb_isEntirelyCharactersInSet:(struct USet *)arg1;
- (_Bool)sb_containsNonLatinLikeCharacters;
@end

