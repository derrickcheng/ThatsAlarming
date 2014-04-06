//
//  alarmCell.h
//  thatsAlarming
//
//  Created by Derrick Cheng on 4/5/14.
//  Copyright (c) 2014 Derrick Cheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AlarmCell : UITableViewCell

@property (retain, nonatomic) IBOutlet UILabel *time;

- (void)setWithAlarm:(UILocalNotification *) notification;
@end
