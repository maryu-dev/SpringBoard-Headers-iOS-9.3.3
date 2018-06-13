
#import "SBApplicationIcon.h"

#import "SBDateTimeOverrideObserver.h"

@class NSString;

@interface SBCalendarApplicationIcon : SBApplicationIcon <SBDateTimeOverrideObserver>
{
}

+ (id)countriesRequiringBlackDayOfWeek;
- (void)_drawIconIntoCurrentContextWithImageSize:(struct CGSize)arg1 iconBase:(id)arg2;
- (id)numberFont;
- (id)colorForDayOfWeek;
- (_Bool)isBlackDayOfWeekRequiredForLocale:(id)arg1;
- (id)getUnmaskedIconImage:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (id)_compositedIconImageForFormat:(int)arg1 withBaseImageProvider:(id)arg2;
- (void)_stopListeningForSignificantTimeChanges;
- (void)_startListeningForSignificantTimeChanges;
- (void)localeChanged;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

