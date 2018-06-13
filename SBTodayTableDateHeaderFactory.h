
#import "NSObject.h"

@interface SBTodayTableDateHeaderFactory : NSObject
{
}

+ (id)languagesSupportingDateOrdinals;
- (id)dateHeaderWithDate:(id)arg1 locale:(id)arg2 singleLine:(_Bool)arg3;
- (id)dateFormatForLocale:(id)arg1 singleLine:(_Bool)arg2;
- (_Bool)isDateOrdinalSupportedForLocale:(id)arg1;

@end

