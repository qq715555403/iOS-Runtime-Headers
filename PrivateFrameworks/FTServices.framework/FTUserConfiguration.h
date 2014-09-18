/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTUserConfiguration : NSObject {
}

@property(readonly) bool _nonWifiFaceTimeEntitled;
@property bool allowAnyNetwork;
@property bool cellularFaceTimeEnabled;

+ (id)sharedInstance;

- (bool)_adequateInternalOrCarrierInstall;
- (bool)_nonWifiFaceTimeEntitled;
- (bool)allowAnyNetwork;
- (bool)cellularFaceTimeEnabled;
- (void)setAllowAnyNetwork:(bool)arg1;
- (void)setCellularFaceTimeEnabled:(bool)arg1;

@end