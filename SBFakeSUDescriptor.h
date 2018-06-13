
#import "SUDescriptor.h"

@interface SBFakeSUDescriptor : SUDescriptor
{
}

- (id)documentation;
- (_Bool)isDownloadableOverCellular;
- (_Bool)isDownloadable;
- (int)updateType;
- (unsigned long long)installationSize;
- (unsigned long long)preparationSize;
- (unsigned long long)downloadSize;
- (id)productBuildVersion;
- (id)productVersion;
- (id)productSystemName;
- (id)humanReadableUpdateName;
- (id)publisher;

@end

