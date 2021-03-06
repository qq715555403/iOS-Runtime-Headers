/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPMTopicsScoredForMapping : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 mappingId:(id)arg3 resultSizeLog10:(unsigned long long)arg4 timeLimited:(struct PPMTypeSafeBool_ { unsigned long long x1; })arg5 exclusionSpec:(struct PPMTypeSafeBool_ { unsigned long long x1; })arg6 error:(struct PPMTypeSafeBool_ { unsigned long long x1; })arg7;
- (id)tracker;

@end
