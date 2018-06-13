
#import "NSObject.h"

@interface SBHarmonicOscillator : NSObject
{
    double A;
    double Z;
    double k;
    double dk;
    double mink;
    double m;
    double dm;
    double minm;
    double psi_n;
    double psi_d;
    double zeta;
}

- (double)amplitudeForElapsedTime:(double)arg1;
- (void)updateParameters;
- (void)setSpringConstant:(double)arg1;
- (id)init;

@end

