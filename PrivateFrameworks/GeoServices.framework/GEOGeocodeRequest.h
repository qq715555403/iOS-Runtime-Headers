/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGeocodeRequest : GEOPlaceSearchRequest {
}

- (id)initForwardGeocodeWithAddress:(id)arg1;
- (id)initForwardGeocodeWithAddressDictionary:(id)arg1;
- (id)initForwardGeocodeWithAddressString:(id)arg1;
- (id)initReverseGeocodeWithCoordinate:(struct { double x1; double x2; })arg1 includeBusinessOptions:(bool)arg2;
- (id)initReverseGeocodeWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithAddress:(id)arg1 maxResults:(int)arg2 traits:(id)arg3;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 traits:(id)arg3;

@end