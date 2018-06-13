
#import "SBWorkspaceEntity.h"

@class SBAlert;

@interface SBWorkspaceAlert : SBWorkspaceEntity
{
    SBAlert *_alert;
}

+ (id)entityForAlert:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAlertEntity;
- (id)_generator;
- (_Bool)representsAlertOfClass:(Class)arg1;
@property(readonly, nonatomic) Class alertClass;
- (id)representedDisplay;
- (id)initWithAlert:(id)arg1;

@end

