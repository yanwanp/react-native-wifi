// Created by Rutger Bresjer on 10/10/2017

// Notes:
// - Be sure to enable "Hotspot Configuration" capability for the iOS target
// - Make sure the NetworkExtension framework is linked to the target

#import <Foundation/Foundation.h>
#import <RCTBridgeModule.h>
#import <CoreLocation/CoreLocation.h>
@interface WifiManager : NSObject <RCTBridgeModule>

@property (nonatomic,strong) CLLocationManager *locationManager;
@end

