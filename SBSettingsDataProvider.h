
#import "NSObject.h"

#import "BBRemoteDataProvider.h"

@class BBDataProviderProxy, NSString;

@interface SBSettingsDataProvider : NSObject <BBRemoteDataProvider>
{
    BBDataProviderProxy *_dataProviderProxy;
}

+ (id)sharedInstance;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)defaultSectionInfo;
- (id)sortDescriptors;
- (id)sectionIdentifier;
- (id)init;

@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

