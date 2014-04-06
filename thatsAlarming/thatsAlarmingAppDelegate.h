//
//  thatsAlarmingAppDelegate.h
//  thatsAlarming
//
//  Created by Derrick Cheng on 4/5/14.
//  Copyright (c) 2014 Derrick Cheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NotifierViewController;

@interface thatsAlarmingAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    NotifierViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet NotifierViewController *viewController;

@end
