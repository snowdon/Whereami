//
//  WhereamiAppDelegate.h
//  Whereami
//
//  Created by  Chuns on 11-8-29.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface WhereamiAppDelegate : NSObject
    <UIApplicationDelegate, CLLocationManagerDelegate, MKMapViewDelegate> {
    CLLocationManager *localManager;

    IBOutlet MKMapView *worldView;
    IBOutlet UIActivityIndicatorView *activityIndicator;
    IBOutlet UITextField *loationTitleField;

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end
