
#import "NSObject.h"

#import "BBRemoteDataProvider.h"

@class BBDataProviderConnection, BBDataProviderProxy, NSString;

@interface SBTestDataProvider2 : NSObject <BBRemoteDataProvider>
{
    BBDataProviderConnection *_connection;
    BBDataProviderProxy *_proxy;
}

+ (id)sharedInstance;
- (void)noteSectionInfoDidChange:(id)arg1;
- (float)attachmentAspectRatioForRecordID:(id)arg1;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)dataProviderDidLoad;
- (id)sectionParameters;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)sortDescriptors;
- (id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3;
- (id)sectionDisplayName;
- (id)defaultSectionInfo;
- (id)sectionIdentifier;
- (void)publish;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

