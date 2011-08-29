//
//  WhereamiAppDelegate.h
//  Whereami
//
//  Created by  Chuns on 11-8-29.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface WhereamiAppDelegate : NSObject <UIApplicationDelegate> {
    CLLocationManager *localManager;

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end
