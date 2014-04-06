//
//  NotifierViewController.h
//  thatsAlarming
//
//  Created by Kilim Choi on 4/6/14.
//  Copyright (c) 2014 Derrick Cheng. All rights reserved.

#import <UIKit/UIKit.h>

@interface NotifierViewController : UIViewController {
}

@property (nonatomic, retain) IBOutlet UIDatePicker *datePicker;
@property (retain, nonatomic) IBOutlet UILabel *eventText;
@property (strong, nonatomic) UILocalNotification *localNotif;

@end
