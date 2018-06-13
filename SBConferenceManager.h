
#import "NSObject.h"

@interface SBConferenceManager : NSObject
{
    _Bool _hasFaceTimeCapability;
    struct MGNotificationTokenStruct *_faceTimeCapabilityUpdateToken;
}

+ (void)initialize;
+ (id)sharedInstance;
- (void)_faceTimeCapabilityChanged:(id)arg1;
- (void)endFaceTime;
- (void)_faceTimeStateChanged:(id)arg1;
- (void)dealloc;
- (_Bool)canStartFaceTime;
- (id)currentFaceTimeCall;
- (id)activeFaceTimeCall;
- (id)incomingFaceTimeCall;
- (_Bool)inFaceTime;
- (_Bool)activeFaceTimeCallExists;
- (_Bool)faceTimeInvitationExists;
- (_Bool)faceTimeIsAvailable;
- (_Bool)hasFaceTimeCapability;
- (id)_faceTimeApp;
- (id)init;

@end

