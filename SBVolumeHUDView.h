
#import "SBHUDView.h"

@interface SBVolumeHUDView : SBHUDView
{
    int _mode;
    _Bool _headphonesPresent;
    float _euVolumeLimit;
}

+ (_Bool)wouldShowAtLeastAYellowBlockForVolume:(float)arg1 euVolumeLimit:(float)arg2;
+ (float)volumeStepDownForCurrentVolume:(float)arg1 euVolumeLimit:(float)arg2;
+ (float)volumeStepUpForCurrentVolume:(float)arg1 euVolumeLimit:(float)arg2;
- (void)_updateBlockView:(id)arg1 value:(float)arg2 blockSize:(struct CGSize)arg3 point:(struct CGPoint)arg4;
- (id)_blockColorForValue:(float)arg1;
- (void)setProgress:(float)arg1;
- (id)init;
- (void)_updateLabels;
- (void)_updateImage;

@end

