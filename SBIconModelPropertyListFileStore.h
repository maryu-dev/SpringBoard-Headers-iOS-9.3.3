
#import "NSObject.h"

#import "SBIconModelStore.h"

@class NSString, NSURL;

@interface SBIconModelPropertyListFileStore : NSObject <SBIconModelStore>
{
    NSURL *_currentIconStateURL;
    NSURL *_desiredIconStateURL;
}

- (_Bool)_save:(id)arg1 url:(id)arg2 error:(id *)arg3;
- (_Bool)_delete:(id)arg1 error:(id *)arg2;
- (id)_load:(id)arg1 error:(id *)arg2;
- (id)loadDesiredIconState:(id *)arg1;
- (id)loadCurrentIconState:(id *)arg1;
- (_Bool)deleteDesiredIconState:(id *)arg1;
- (_Bool)deleteCurrentIconState:(id *)arg1;
- (_Bool)saveDesiredIconState:(id)arg1 error:(id *)arg2;
- (_Bool)saveCurrentIconState:(id)arg1 error:(id *)arg2;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

