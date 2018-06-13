
#import "NSObject.h"

#import "SBBulletinAlertHandlerRegistry.h"
#import "_UISettingsKeyObserver.h"

@class NSMutableDictionary, NSString, SBAlertItemsSettings;

@interface SBBulletinAlertHandlerRegistry : NSObject <_UISettingsKeyObserver, SBBulletinAlertHandlerRegistry>
{
    NSMutableDictionary *_handlersBySectionID;
    SBAlertItemsSettings *_settings;
    _Bool _disabled;
}

- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)addAlertHandler:(id)arg1 forSection:(id)arg2;
- (id)alertHandlersForSection:(id)arg1;
- (void)dealloc;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

