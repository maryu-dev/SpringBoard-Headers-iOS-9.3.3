
#import "NSObject.h"

@class NSDate, SBSoftwareUpdateStatePersistence, SUDownload;

@interface SBSoftwareUpdateAlertModel : NSObject
{
    id <SBSoftwareUpdateAlertModelDelegate> _delegate;
    SBSoftwareUpdateStatePersistence *_persistence;
    SUDownload *_updateToInstall;
}

- (void)_setUpdateToInstall:(id)arg1;
- (void)_setDownloadWasQueuedRemotely:(_Bool)arg1;
- (void)_setInstallAlertRepopStrategy:(unsigned long long)arg1 withFireDate:(id)arg2;
- (void)_setInstallAlertFlow:(unsigned long long)arg1 forReason:(id)arg2;
- (unsigned long long)_initialInstallAlertFlowFromDownload;
- (void)_initializeModelWithDownload:(id)arg1 autoInstallOperation:(id)arg2;
- (void)setInstallAlertRepopStrategy:(unsigned long long)arg1 withFireDate:(id)arg2;
- (void)willInstallWithType:(unsigned long long)arg1;
- (void)didDownloadUpdate:(id)arg1;
- (void)setDownloadWasQueuedRemotely:(_Bool)arg1;
- (void)autoInstallOperationWasCancelledOrExpired;
- (void)userSelectedRemindMeLater;
- (void)reset;
@property(readonly, nonatomic) unsigned long long nextAlertRepopStrategy;
@property(readonly, nonatomic) NSDate *nextAlertDate;
@property(readonly, nonatomic) unsigned long long alertFlow;
- (id)initWithDownload:(id)arg1 autoInstallOperation:(id)arg2;
- (id)init;

@end

