
#import "NSObject.h"

#import "BBRemoteDataProvider.h"

@class BBDataProviderConnection, BBDataProviderProxy, NSMutableArray, NSString;

@interface SBTestDataProvider : NSObject <BBRemoteDataProvider>
{
    BBDataProviderConnection *_connection;
    BBDataProviderProxy *_proxy;
    NSMutableArray *_bulletinRequests;
}

+ (id)sharedInstance;
- (void)noteSectionInfoDidChange:(id)arg1;
- (float)attachmentAspectRatioForRecordID:(id)arg1;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)dataProviderDidLoad;
- (id)sectionParameters;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3;
- (id)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1;
- (id)sortDescriptors;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)displayNameForSubsectionID:(id)arg1;
- (id)sectionDisplayName;
- (id)defaultSubsectionInfos;
- (id)defaultSectionInfo;
- (id)sectionIdentifier;
- (id)_newBulletinRequest:(id)arg1;
- (id)_existingBulletinRequestForPublisherBulletinID:(id)arg1;
- (void)publish;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

